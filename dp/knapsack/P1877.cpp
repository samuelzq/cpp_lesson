/**
 * https://www.luogu.com.cn/problem/P1877
 *
 * @File:   P1877.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2024-09-06
 *
 **/
#include <bits/stdc++.h>
using namespace std;

int v[55];
int dp[55][1010] = {{0}};   // 前i首歌曲所能够达到的最大音量

int main(void)
{
	int n, b, maxl;

	cin >> n >> b >> maxl;
	dp[0][b] = 1;    // 初始状态
	for (int i = 1; i <= n; i++) {
		cin >> v[i];
	}

	for (int i = 1; i <= n; i++) {
		for (int j = maxl; j >= 0; j--) {
			if (dp[i - 1][j]) {    // 音量j是前i-1首歌曲能达到的
				if (j + v[i] <= maxl)    // 可以增加当前音量
					dp[i][j + v[i]] = 1;
				if (j - v[i] >= 0)       // 可以减少当前音量
					dp[i][j - v[i]] = 1;
			}
		}
	}

	for (int i = maxl; i >= 0; i--) {
		if (dp[n][i]) {   // 查找前n首乐曲能达到的最大音量
			cout << i << endl;
			return 0;
		}
	}
	cout << -1 << endl;
	return 0;
}

/**
 * https://www.luogu.com.cn/problem/P1757
 *
 * @File:   P1757.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2024-09-05
 *
 **/
#include <bits/stdc++.h>
using namespace std;

int c[110] = {0};   // 每组中物品数量
int a[1010] = {0};
int b[1010] = {0};
int idx[110][1010] = {{0}};   // 每个物品的编号
int dp[1010] = {0};

int main(void)
{
	int m, n, x;

	cin >> m >> n;
	x = 0;
	for (int i = 1; i <= n; i++) {
		int t;
		cin >> a[i] >> b[i] >> t;
		x = max(x, t);
		c[t]++;
		idx[t][c[t]] = i;
	}

	for (int i = 1; i <= x; i++) {  // 遍历每一个分组
		for (int j = m; j >= 0; j--) {
			for (int l = 1; l <= c[i]; l++) { // 遍历当前分组中的每个物品
				int ix = idx[i][l];
				if (j >= a[ix])
					dp[j] = max(dp[j], dp[j - a[ix]] + b[ix]);
			}
		}
	}
	cout << dp[m] << endl;
	return 0;
}

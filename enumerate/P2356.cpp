/**
 * https://www.luogu.com.cn/problem/P2356
 *
 * @File:   P2356.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2024-07-29
 *
 **/
#include <bits/stdc++.h>
using namespace std;

int a[1010][1010] = {0};

int main(void)
{
	int n;
	int ans;

	cin >> n;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cin >> a[i][j];

	ans = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (a[i][j] == 0) {  // 枚举每一个位置，找到空位
				int t = 0;
				for (int k = 0; k < n; k++) { // 枚举该空位对应的行和列
					t += a[k][j];
					t += a[i][k];
				}
				//cout << t << endl;
				ans = max(ans, t);
			}
		}
	}
	cout << ans << endl;
	return 0;
}

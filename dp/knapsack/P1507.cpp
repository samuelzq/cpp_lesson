/**
 * https://www.luogu.com.cn/problem/P1507
 *
 * @File:   P1507.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2024-09-04
 *
 **/
#include <bits/stdc++.h>
using namespace std;

int dp[55][404][404] = {0};
int h[55], t[55], k[55];

int main(void)
{
	int hh, tt, n;

	cin >> hh >> tt >> n;
	for (int i = 1; i <= n; i++)
		cin >> h[i] >> t[i] >> k[i];

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= hh; j++) {
			for (int l = 1; l <= tt; l++) {
				if (j < h[i] || l < t[i])
					dp[i][j][l] = dp[i - 1][j][l];
				else
					dp[i][j][l] = max(dp[i - 1][j][l], dp[i - 1][j - h[i]][l - t[i]] + k[i]);
			}
		}
	}
	cout << dp[n][hh][tt] << endl;
	return 0;
}


/**
 * https://www.luogu.com.cn/problem/P1164
 * @File:   P1164.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2024-09-04
 *
 **/
#include <bits/stdc++.h>
using namespace std;

int dp[110][50500];
int v[110];

int main(void)
{
	int n, m;

	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		cin >> v[i];

	for (int i = 0; i <= n; i++)
		dp[i][0] = 1;

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			if (j < v[i])
				dp[i][j] = dp[i - 1][j];
			else
				dp[i][j] = dp[i - 1][j] + dp[i - 1][j - v[i]];
		}
	}
	cout << dp[n][m] << endl;
	return 0;
}

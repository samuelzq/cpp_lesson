/**
 * https://www.luogu.com.cn/problem/P2722
 *
 * @File:   P2722.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2024-09-06
 *
 **/
#include <bits/stdc++.h>
using namespace std;

#define N 10004
int w[N], v[N];
int dp[N][N];

int main(void)
{
	int n, m;

	cin >> m >> n;
	for (int i = 1; i <= n; i++)
		cin >> v[i] >> w[i];

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			if (j < w[i])
				dp[i][j] = dp[i - 1][j];
			else
				dp[i][j] = max(dp[i - 1][j], dp[i][j - w[i]] + v[i]);
		}
	}
	cout << dp[n][m] << endl;
	return 0;
}


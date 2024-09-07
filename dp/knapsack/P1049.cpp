/**
 * https://www.luogu.com.cn/problem/P1049
 *
 * @File:   P1049.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2024-09-03
 *
 **/
#include <bits/stdc++.h>
using namespace std;

int dp[33][20002] = {0};
int w[33] = {0};

int main(void)
{
	int v, n;

	cin >> v >> n;
	for (int i = 1; i <= n; i++)
		cin >> w[i];

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= v; j++) {
			if (j < w[i])
				dp[i][j] = dp[i - 1][j];
			else
				dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - w[i]] + w[i]);
		}
	}
	cout << v - dp[n][v] << endl;
	return 0;
}

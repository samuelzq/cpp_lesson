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
int dp[N];

int main(void)
{
	int n, m;

	cin >> m >> n;
	for (int i = 1; i <= n; i++)
		cin >> v[i] >> w[i];

	for (int i = 1; i <= n; i++) {
		for (int j = w[i]; j <= m; j++) {
			dp[j] = max(dp[j], dp[j - w[i]] + v[i]);
		}
	}
	cout << dp[m] << endl;
	return 0;
}

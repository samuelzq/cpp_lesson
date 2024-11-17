/**
 * https://www.luogu.com.cn/problem/P1164
 *
 * @File:   P1164_2.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-11-08
 *
 */
#include <bits/stdc++.h>
using namespace std;

int dp[50500];
int v[110];

int main(void)
{
	int n, m;

	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		cin >> v[i];

	dp[0] = 1;

	for (int i = 1; i <= n; i++) {
		for (int j = m; j >= v[i]; j--) {
			dp[j] = dp[j] + dp[j - v[i]];
		}
	}
	cout << dp[m] << endl;
	return 0;
}


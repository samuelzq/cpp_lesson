/**
 * https://www.luogu.com.cn/problem/P1616
 *
 * @File:   P1616.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2024-09-04
 *
 **/
#include <bits/stdc++.h>
using namespace std;

long long int dp[10000007] = {0};
int tt[10004], vv[10004];

int main(void)
{
	int t, m;

	cin >> t >> m;

	for (int i = 1; i <= m; i++)
		cin >> tt[i] >> vv[i];

	for (int i = 1; i <= m; i++) {
		for (int j = 1; j <= t; j++) {
			if (j < tt[i])
				dp[j] = dp[j];
			else
				dp[j] = max(dp[j], dp[j - tt[i]] + vv[i]);
		}
	}
	cout << dp[t] << endl;
	return 0;
}


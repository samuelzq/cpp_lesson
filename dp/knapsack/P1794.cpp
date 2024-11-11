/**
 * https://www.luogu.com.cn/problem/P1794
 *
 * @File:   P1794.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2024-11-01
 *
 **/
#include <bits/stdc++.h>
using namespace std;

#define LL long long
LL t[550], v[550], g[550];
LL dp[550][550] = {{0}};

int main(void)
{
	int tv, tg, n;

	cin >> tv >> tg >> n;

	for (int i = 1; i <= n; i++)
		cin >> t[i] >> v[i] >> g[i];

	for (int i = 1; i <= n; i++) {
		for (int j = tv; j >= v[i]; j--) {
			for (int k = tg; k >= g[i]; k--) {
				dp[j][k] = max(dp[j][k], dp[j - v[i]][k - g[i]] + t[i]);
			}
		}
	}
	cout << dp[tv][tg] << endl;
	return 0;
}

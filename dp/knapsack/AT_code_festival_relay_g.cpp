/**
 * https://www.luogu.com.cn/problem/AT_code_festival_relay_g
 *
 * @File:   AT_code_festival_relay_g.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2024-10-31
 *
 **/
#include <bits/stdc++.h>
using namespace std;

int a[55];
int dp[30003];

int main(void)
{
	int n, m, maxa, sum;

	cin >> n >> m;
	memset(dp, 0x3f, sizeof(dp));
	dp[0] = 0;

	maxa = sum = 0;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		maxa = max(maxa, a[i]);
		sum += a[i];
	}

	if (sum < m) {
		cout << -1 << endl;
		return 0;
	}

	for (int i = 1; i <= n; i++) {
		for (int j = m + maxa; j >= a[i]; j--) {
			dp[j] = min(dp[j], dp[j - a[i]] + a[i]);
		}
	}

	int ans = dp[m];
	for (int i = m; i <= m + maxa; i++)
		ans = min(ans, dp[i]);

	cout << ans << endl;
	return 0;
}

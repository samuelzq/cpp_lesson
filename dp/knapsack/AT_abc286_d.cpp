/**
 * https://www.luogu.com.cn/problem/SP33795
 *
 * @File:   AT_abc286_d.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2024-10-16
 *
 **/
#include <bits/stdc++.h>
using namespace std;

int dp[10004] = {0};
int a[55], b[55];

int main(void)
{
	int n, x;

	cin >> n >> x;

	for (int i = 1; i <= n; i++)
		cin >> a[i] >> b[i];

	dp[0] = 1;

	for (int i = 1; i <= n; i++) {
		if (a[i] * b[i] >= x) {
			for (int j = a[i]; j <= x; j++)
				dp[j] |= dp[j - a[i]];
		} else {
			int k = 1;
			int m = b[i];

			while (k < m) {
				for (int j = x; j >= k * a[i]; j--)
					dp[j] |= dp[j - a[i] * k];
				m -= k;
				k = k << 1;
			}

			if (m) {
				for (int j = x; j >= m * a[i]; j--)
					dp[j] |= dp[j - m * a[i]];
			}
		}
	}

	if (dp[x])
		cout << "Yes" << endl;
	else
		cout << "No" << endl;

	return 0;
}

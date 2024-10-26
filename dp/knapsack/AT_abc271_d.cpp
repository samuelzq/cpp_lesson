/**
 * https://www.luogu.com.cn/problem/AT_abc271_d
 *
 * @File:   AT_abc271_d.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2024-10-22
 *
 **/
#include <bits/stdc++.h>
using namespace std;

int dp[110][10004] = {0};
int a[110], b[110];
string ans;

void output(int n, int s)
{
	if (n == 0)
		return;

	if (s >= a[n] && dp[n - 1][s - a[n]]) {
		output(n - 1, s - a[n]);
		ans = ans + 'H';
	} else if (s >= b[n] && dp[n - 1][s - b[n]]) {
		output(n - 1, s - b[n]);
		ans = ans + 'T';
	}
}

int main(void)
{
	int n, s;

	cin >> n >> s;
	for (int i = 1; i <= n; i++)
		cin >> a[i] >> b[i];

	dp[0][0] = 1;
	for (int i = 1; i <= n; i++) {
		for (int j = 0; j <= s; j++) {
			if (dp[i - 1][j])
				dp[i][j + a[i]] = dp[i][j + b[i]] = dp[i - 1][j];
		}
	}

	if (dp[n][s]) {
		output(n, s);
		cout << "Yes\n" << ans << endl;

	} else {
		cout << "No" << endl;
	}
	return 0;
}

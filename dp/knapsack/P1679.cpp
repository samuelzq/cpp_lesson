/**
 * https://www.luogu.com.cn/problem/P1679
 *
 * @File:   P1679.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2024-09-04
 *
 **/
#include <bits/stdc++.h>
using namespace std;

int dp[100009];
int v[100009];

int main(void)
{
	int m, n;

	cin >> m;

	for (int i = 1; i <= m; i++) {
		dp[i] = m;
		v[i] = i * i * i * i;
	}

	n = sqrt(sqrt(m) + 1) + 1;
	for (int i = 1; i <= n; i++) {
		for (int j = v[i]; j <= m; j++)
			dp[j] = min(dp[j], dp[j - v[i]] + 1);
	}
	cout << dp[m] << endl;
	return 0;
}

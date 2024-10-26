/**
 * https://www.luogu.com.cn/problem/P1466
 *
 * @File:   P1466.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2024-10-21
 *
 **/
#include <bits/stdc++.h>
using namespace std;

long long int dp[40] = {0};

int main(void)
{
	int n, s;

	cin >> n;

	s = (1 + n) * n / 2;

	if (s & 1) {
		cout << 0 << endl;
		return 0;
	}

	s /= 2;
	dp[0] = 1;

	for (int i = 1; i <= n; i++) {
		for (int j = s; j >= i; j--) {
			dp[j] = dp[j - i] + dp[j];
		}
	}

	cout << dp[s] / 2 << endl;
	return 0;
}

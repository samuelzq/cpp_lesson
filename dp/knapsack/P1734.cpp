/**
 *
 * @File:   P1734.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2024-09-04
 *
 **/
#include <bits/stdc++.h>
using namespace std;

int dp[1010] = {0};
int s[1010];

int get_sum(int a)
{
	int i, s = 0;

	for (i = 1; i < a; i++) {
		if (a % i == 0)
			s = s + i;
	}
	return s;
}

int main(void)
{
	int n;

	cin >> n;
	for (int i = 1; i <= n; i++)
		s[i] = get_sum(i);

	for (int i = 1; i <= n; i++) {
		for (int j = n; j >= i; j--)
			dp[j] = max(dp[j], dp[j - i] + s[i]);
	}
	cout << dp[n] << endl;
	return 0;
}

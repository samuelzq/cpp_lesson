/**
 *  https://www.luogu.com.cn/problem/CF1042B
 *
 * @File:   CF1042B.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2024-10-18
 *
 **/
#include <bits/stdc++.h>
using namespace std;

int c[1010];
int s[1010];
int dp[8];

int main(void)
{
	int n;

	cin >> n;

	for (int i = 1; i <= n; i++) {
		string str;

		cin >> c[i] >> str;

		for (char a : str) {
			s[i] |= 1 << (a - 'A');
		}
	}

	memset(dp, 0x3f, sizeof(dp));
	dp[0] = 0;
	for (int i = 1; i <= n; i++) {
		for (int j = 7; j >= 0; j--)
			dp[j | s[i]] = min(dp[j | s[i]], dp[j] + c[i]);
	}

	cout << ((dp[7] == 0x3f3f3f3f) ? -1 : dp[7]) << endl;
	return 0;
}

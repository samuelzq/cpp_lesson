/**
 * https://www.luogu.com.cn/problem/P2946
 *
 * @File:   P2946.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2024-11-01
 *
 **/
#include <bits/stdc++.h>
using namespace std;

int a[2010];
int dp[2010][1010] = {0};   // 前i个数中余数是j的方案数
int MOD = 100000000;

int main(void)
{
	int n, f;

	cin >> n >> f;
	for (int i = 1; i <= n; i++) {
		int t;
		cin >> t;
		a[i] = t % f;
		dp[i][a[i]] = 1;  // 初始条件
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 0; j < f; j++) {  // 有两种情况：不选当前第i个数；选择当前第i个数，此时需要注意余数减法的处理
			dp[i][j] = (dp[i][j] + dp[i - 1][j] + dp[i - 1][(j + f - a[i]) % f]) % MOD;
		}
	}

	cout << dp[n][0] << endl;
	return 0;
}

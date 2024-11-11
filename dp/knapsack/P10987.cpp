/**
 * https://www.luogu.com.cn/problem/P10987
 *
 * @File:   P10987.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2024-11-07
 *
 **/
#include <bits/stdc++.h>
using namespace std;

int w[220];
int dp[1010][1010] = {{0}};

int main(void)
{
	int n, a, b, ans;

	cin >> n >> a >> b;
	for (int i = 1; i <= n; i++)
		cin >> w[i];

	ans = 0;
	for (int i = 1; i <= n; i++) {
		for (int j = a; j >= 0; j--) {  // 注意需要递减到0
			for (int k = b; k >= 0; k--) {
				if (j >= w[i])
					dp[j][k] = max(dp[j][k], dp[j - w[i]][k] + w[i]);

				if (k >= w[i])
					dp[j][k] = max(dp[j][k], dp[j][k - w[i]] + w[i]);
				ans = max(ans, dp[j][k]);
			}
		}
	}
	cout << dp[a][b] << endl;
	return 0;
}

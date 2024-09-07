/**
 * https://www.luogu.com.cn/problem/P1855
 *
 * @File:   P1855.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2024-09-05
 *
 **/
#include <bits/stdc++.h>
using namespace std;

int dp[202][202] = {{0}};
int m[102] = {0};
int t[102] = {0};

int main(void)
{
	int n, mm, tt;

	cin >> n >> mm >> tt;

	for (int i = 1; i <= n; i++)
		cin >> m[i] >> t[i];

	for (int i = 1; i <= n; i++) {
		for (int j = mm; j >= m[i]; j--) {
			for (int k = tt; k >= t[i]; k--) { // 如果能够满足，则看满足这个愿望是否能够增加总量
				dp[j][k] = max(dp[j][k], dp[j - m[i]][k - t[i]] + 1);
			}
		}
	}
	cout << dp[mm][tt] << endl;
	return 0;
}

/**
 * https://www.luogu.com.cn/problem/P4141
 *
 * @File:   P4141.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2024-11-04
 *
 **/
#include <bits/stdc++.h>
using namespace std;

int a[2020];
int dp[2020][2] = {{0}};  // dp[i][j]表示在前i个物品中不装入j的物品所得到的方案数

int main(void)
{
	int n, m;

	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}

	dp[0][0] = 1;
	dp[0][1] = 1;

	// 首先按经典0-1背包推导，此时装包无限制条件
	for (int i = 1; i <= n; i++) {
		for (int j = m; j >= a[i]; j--) {
			dp[j][0] = (dp[j][0] + dp[j - a[i]][0]) % 10;
		}
	}

	// 依次减去指定的物品
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			if (j >= a[i]) {  // dp[j - a[i]][1]表示当a[i]不在包内，容量达到j-a[i]时的方案数
				dp[j][1] = (dp[j][0] + 10 - dp[j - a[i]][1]) % 10;
			} else {
				dp[j][1] = dp[j][0];
			}
			cout << dp[j][1];
		}
		cout << endl;
	}
	return 0;
}

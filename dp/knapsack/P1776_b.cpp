/**
 * https://www.luogu.com.cn/problem/P1776_b
 *
 * @File:   P1776_b.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-10-07
 *
 */
#include <bits/stdc++.h>
using namespace std;

int dp[40004] = {0};
int v[110], w[110], m[110];

int main(void)
{
	int n, l;

	cin >> n >> l;
	for (int i = 1; i <= n; i++)
		cin >> v[i] >> w[i] >> m[i];

	for (int i = 1; i <= n; i++) {
		if (m[i] * w[i] >= l) {  // 当前种类的物品可以装满背包，完全背包问题
			for (int j = w[i]; j <= l; j++)
				dp[j] = max(dp[j], dp[j - w[i]] + v[i]);
		} else {  // 当前物品总重量无法装满背包，转换成二进制中不同的值后，利用0-1背包方式处理
			int k = 1;
			int tm = m[i];
			while (k < tm) {
				for (int j = l; j >= w[i] * k; j--)
					dp[j] = max(dp[j], dp[j - w[i] * k] + v[i] * k);
				tm -= k;
				k = k << 1;
			}
			for (int j = l; j >= w[i] * tm; j--)
				dp[j] = max(dp[j], dp[j - w[i] * tm] + v[i] * tm);
		}
	}
	cout << dp[l] << endl;
	return 0;
}

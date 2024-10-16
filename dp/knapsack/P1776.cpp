/**
 * https://www.luogu.com.cn/problem/P1776
 *
 * @File:   P1776.cpp
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
		for (int j = l; j >= w[i]; j--) {  // 将k的物品当成一个物品，这样多重背包就转换成了0-1背包
			for (int k = 1; k <= m[i] && k * w[i] <= j; k++) {  // 遍历每一种可能的组合
				dp[j] = max(dp[j], dp[j - w[i] * k] + v[i] * k);
			}
		}
	}
	cout << dp[l] << endl;
	return 0;
}

/**
 * https://www.luogu.com.cn/problem/P1510
 *
 * @File:   P1510.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2024-10-31
 *
 **/
#include <bits/stdc++.h>
using namespace std;

#define N   10004
int a[N], b[N];
int dp[200008];

int main(void)
{
	int v, n, c, maxv;

	cin >> v >> n >> c;

	maxv = 0;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> b[i];
		maxv = max(maxv, a[i]);
	}

	memset(dp, 0x7f, sizeof(dp));
	dp[0] = 0;
	for (int i = 1; i <= n; i++) {
		for (int j = maxv + v; j >= a[i]; j--) {  //背包容量的上限需要加上最大的限制条件
			dp[j] = min(dp[j], dp[j - a[i]] + b[i]);
		}
	}

	int ans = dp[v];
	// 在刚好填平和有溢出之间选一个最小值，无法达到的上限都是默认的最大值
	for (int i = v; i <= v + maxv; i++)
		ans = min(ans, dp[i]);

	if (ans <= c)
		cout << c - ans << endl;
	else
		cout << "Impossible" << endl;

	return 0;

}

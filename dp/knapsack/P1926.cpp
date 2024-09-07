/**
 * https://www.luogu.com.cn/problem/P1926
 *
 * @File:   P1926.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2024-09-06
 *
 **/
#include <bits/stdc++.h>
using namespace std;

int p[15], h[15], v[15];
int dp[200] = {0};    // 刷题最大数量

int main(void)
{
	int n, m, k, r, cnt;

	cin >> n >> m >> k >> r;
	for (int i = 1; i <= n; i++)
		cin >> p[i];

	for (int i = 1; i <= m; i++)
		cin >> h[i];

	for (int i = 1; i <= m; i++)
		cin >> v[i];

	for (int i = 1; i <= k; i++)
		dp[i] = 0x3f3f3f3f;

	// 0-1背包找最小值
	for (int i = 1; i <= m; i++) {
		for (int j = k; j >= v[i]; j--)
			dp[j] = min(dp[j], dp[j - v[i]] + h[i]);
	}
//	cout << dp[k] << endl;

	// 贪心法计算最大刷题量
	sort(p, p + n);
	r = r - dp[k];
	cnt = 0;
	for (int i = 1; i <= n && p[i] <= r; i++) {
		cnt++;
		r -= p[i];
	}
	cout << cnt << endl;
	return 0;
}

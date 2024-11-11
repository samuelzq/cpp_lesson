/**
 *
 * @File:   P1455.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2024-11-05
 *
 **/
#include <bits/stdc++.h>
using namespace std;

int p[10005] = {0};   // parent
int dp[10005] = {0};
int c[10005], d[10005];

int find(int x)
{
	if (p[x] != x)
		p[x] = find(p[x]);

	return p[x];
}

int main(void)
{
	int n, m, w, ans;

	cin >> n >> m >> w;
	for (int i = 1; i <= n; i++)
		cin >> c[i] >> d[i];

	// 利用并查集建立依赖关系
	for (int i = 1; i <= n; i++)
		p[i] = i;

	for (int i = 1; i <= m; i++) {
		int u, v;

		cin >> u >> v;
		p[find(u)] = find(v); // 此时构建的并查集深度不一定是最浅的
	}

	// 将依赖的花朵全部加到父结点
	for (int i = 1; i <= n; i++) {
		if (p[i] != i) {
			int f = find(i);
			c[f] += c[i];
			c[i] = 0;
			d[f] += d[i];
			d[i] = 0;
		}
	}

	dp[0] = 0;
	for (int i = 1; i <= n; i++) {
		for (int j = w; j >= c[i]; j--)
			dp[j] = max(dp[j], dp[j - c[i]] + d[i]);
	}

	ans = dp[w];
	for (int i = w - 1; i > 0; i--) {
		ans = max(ans, dp[i]);
	}
	cout << ans << endl;
	return 0;
}

/**
 * https://www.luogu.com.cn/problem/P1113
 *
 * @File:   P1113.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-12-22
 *
 */
#include <bits/stdc++.h>
using namespace std;

#define N  10004
vector<int> t[N]; // 记录有向图图中每个点的入点
int vis[N] = {0};
int len[N];

int dfs(int x)
{
	if (vis[x])
		return vis[x];

	for (int i = 0; i < t[x].size(); i++)
		vis[x] = max(vis[x], dfs(t[x][i]));
	vis[x] += len[x];
	return vis[x];
}

int main(void)
{
	int n;

	cin >> n;
	for (int i = 1; i <= n; i++) {
		int x, y;
		cin >> x >> len[i];
		while (1) {
			cin >> y;
			if (y == 0)
				break;
			t[x].push_back(y);   // y ---> x
		}
	}

	for (int i = 1; i <= n; i++)
		dfs(i);

	int ans = 0;
	for (int i = 1; i <= n; i++)
		ans = max(ans, vis[i]);

	cout << ans << endl;
	return 0;
}

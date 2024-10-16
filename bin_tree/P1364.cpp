/**
 * https://www.luogu.com.cn/problem/P1364
 *
 * @File:   P1364.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-10-05
 *
 */
#include <bits/stdc++.h>
using namespace std;

struct node {
	int left, right, father, val;
} city[110];
int vis[110] = {0};

int cal(int id, int dep)
{
	if (!id || vis[id])
		return 0;

	vis[id] = 1;
	return cal(city[id].left, dep + 1) + cal(city[id].right, dep + 1) +  // 左右两个子树到达当前结点的路径和
			cal(city[id].father, dep + 1) + city[id].val * dep; // 父结点到达当前结点的路径和
}

int main(void)
{
	int n, ans;

	cin >> n;
	for (int i = 1; i <= n; i++) {
		int w, u, v;

		cin >> w >> u >> v;
		city[i].val = w;
		city[i].left = u;
		city[i].right = v;
		if (v)
			city[v].father = i;
		if (u)
			city[u].father = i;
	}

	ans = 0x3fffffff;
	for (int i = 1; i <= n; i++) {
		memset(vis, 0, sizeof(vis));
		ans = min(ans, cal(i, 0));
	}
	cout << ans << endl;
	return 0;
}

/**
 * https://www.luogu.com.cn/problem/P1807
 *
 * @File:   1807.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-12-24
 *
 */
#include <bits/stdc++.h>
using namespace std;

#define N     1550
struct neighbor {
	int v;
	long long int w;
};
int in[N] = {0};
vector<neighbor>adjEdge[N];
int t[N];
int len = 0;
long long int dp[N];

void topsort(int n)
{
	queue<int> q;

	for (int i = 1; i <= n; i++) {
		if (!in[i])
			q.push(i);
	}

	while (!q.empty()) {
		int u = q.front();
		q.pop();
		t[len++] = u;
		for (auto v : adjEdge[u]) {
			if (--in[v.v] == 0)
				q.push(v.v);
		}
	}

	if (len != n)
		cout << "len = " << len << " Erro\n";
}

int main(void)
{
	int n, m;

	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		int u, v, w;
		neighbor n;
		cin >> u >> v >> w;
		n.v = v;
		n.w = w;
		adjEdge[u].push_back(n);
		in[v]++;
	}

	topsort(n);

	// 求从1到n的距离，因此到节点1的初始距离设成1
	// 到其余节点的距离初始值设成负无穷大
	dp[1] = 0;
	for (int i = 2; i <= n; i++)
		dp[i] = INT_MIN;

	// 依据拓扑排序后的结果，依次更新每个节点后序节点的距离
	// 由于节点1之前的节点初始值都是负无穷大，因此它们之后的
	// 节点不会被更新
	for (int i = 0; i < len; i++) {
		int e = t[i];
		if (dp[e] != -1) {
			for (auto v : adjEdge[e]) {
				dp[v.v] = max(dp[v.v], dp[e] + v.w);
			}
		}
	}

	cout << ((dp[n] == INT_MIN) ? -1 : dp[n]) << endl;
	return 0;
}

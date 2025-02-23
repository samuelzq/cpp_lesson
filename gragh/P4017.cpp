/**
 * https://www.luogu.com.cn/problem/P4017
 *
 * @File:   P4017.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-12-22
 *
 */
#include <bits/stdc++.h>
using namespace std;

#define N  5005
#define MODE 80112002

int f[N] = {0};
vector<int>  g[N];
vector<int> l;
int in[N];
int out[N];

bool topsort(int n)
{
	queue<int> s;

	for (int i = 1; i <= n; i++) {
		if (in[i] == 0) {
			f[i] = 1;
			s.push(i);
		}
	}

	while (!s.empty()) {
		int u = s.front();
		s.pop();
		l.push_back(u);
		for (auto v : g[u]) {
			f[v] = (f[v] + f[u]) % MODE;
			if (--in[v] == 0)
				s.push(v);
		}
	}

	if (l.size() == n) {
		//for (auto i : l) cout << i << ' ';	
		return true;
	}
	else
		return false;
}

int main(void)
{
	int n, m;

	cin >> n >> m;
	for (int i = 1; i <= m; i++) {
		int a, b;

		cin >> a >> b;
		g[b].push_back(a);
		in[a]++;
		out[b]++;
	}

	// 拓扑展开，展开的过程中计算每个节点入径的数目
	topsort(n);

	// 统计出度为0的节点入径的数目
	int ans = 0;
	for (int i = n; i > 0; i--) {
		if (out[i] == 0) {
			ans = (ans + f[i]) % MODE;
		}
	}

	cout << ans << endl;
	return 0;
}

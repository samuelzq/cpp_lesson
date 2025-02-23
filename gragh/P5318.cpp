/**
 * https://www.luogu.com.cn/problem/P531
 *
 * @File:   P5318.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-12-21
 *
 */
#include <bits/stdc++.h>
using namespace std;

#define N  100005
bool a[N] = {0};
vector<int> b[N];

void dfs(int x)
{
	int sz = b[x].size();
	cout << x << ' ';
	for (int i = 0; i < sz; i++) {
		if (a[b[x][i]] == false) {
			a[b[x][i]] = true;
			dfs(b[x][i]);
		}
	}
}

void bfs(int x)
{
	queue<int> q;
	q.push(x);
	while (!q.empty()) {
		int c = q.front();

		q.pop();
		cout << c << ' ';
		for (int i = 0; i < b[c].size(); i++) {
			if (a[b[c][i]] == false) {
				a[b[c][i]] = true;
				q.push(b[c][i]);
			}
		}
	}
}

int main(void)
{
	int n, m;

	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		int x, y;
		cin >> x >> y;
		b[x].push_back(y);
	}

	for (int i = 1; i <= n; i++)
		sort(b[i].begin(), b[i].end());

	a[1] = true;   // 注意这里需要设成1
	dfs(1);
	cout << '\n';
	memset(a, 0, sizeof(a));
	a[1] = true;
	bfs(1);
	cout << endl;
	return 0;
}

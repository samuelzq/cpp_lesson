/**
 * https://www.luogu.com.cn/problem/P1892
 *
 * @File:   P1892.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-12-13
 *
 */
#include <bits/stdc++.h>
using namespace std;

int p[2024];

int find(int x)
{
	return (x == p[x]) ? x : p[x] = find(p[x]);
}

int merge(int x, int y)
{
	int px, py;

	px = find(x);
	py = find(y);

	if (py != px)
		p[py] = px;
	return find(y);
}

int main(void)
{
	int n, m;

	cin >> n >> m;
	for (int i = 0; i <= 2 * n; i++)
		p[i] = i;

	for (int i = 0; i < m; i++) {
		char opt;
		int p, q;

	cin >> opt >> p >> q;
	if (opt == 'E') {  // 敌人的敌人是朋友
			merge(p, q + n);
			merge(q, p + n);
		} else if (opt == 'F') {
			merge(p, q);
		}
	}

	int cnt = 0;
	for (int i = 1; i <= n; i++) {
		if (p[i] == i)
			cnt++;
	}
	cout << cnt << endl;
	return 0;
}

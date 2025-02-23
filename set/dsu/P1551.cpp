/**
 * https://www.luogu.com.cn/problem/P1551
 *
 * @File:   P1551.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-12-01
 *
 */
#include <bits/stdc++.h>
using namespace std;

int pa[5005];

//查询过程中进行路径压缩
int find(int x)
{
	return (pa[x] == x) ? x : pa[x] = find(pa[x]);
}

int main(void)
{
	int n, m, p;

	cin >> n >> m >> p;

	// 初始化并查集
	for (int i = 0; i <= n; i++)
		pa[i] = i;

	// 为每一组输入建立联系
	for (int i = 0; i < m; i++) {
		int x, y;

		cin >> x >> y;
		pa[find(x)] = find(y);
	}

	for (int i = 0; i < p; i++) {
		int x, y;

		cin >> x >> y;

		if (find(x) == find(y))
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
	}

	return 0;
}

/**
 * https://www.luogu.com.cn/problem/P1955
 *
 * @File:   P1955.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-12-14
 *
 */
#include <bits/stdc++.h>
using namespace std;

struct node {
	int i, j, e;

	node () {i = j = e = 0;}

	node (int _i, int _j, int _e) {
		i = _i;
		j = _j;
		e = _e;
	}
} ops[100020];

map<int, int> uf;  // 由于输入的数据数值会比较大，因此使用map来描述并查集

bool cmp(node &n1, node &n2)
{
	return n1.e > n2.e;
}

int find(int x)
{
	map<int, int>::iterator it;
	it = uf.find(x);
	if (it == uf.end()) {
		uf[x] = x;
		return x;
	} else {
		return (x == uf[x]) ? x : uf[x] = find(uf[x]);
	}
}

void merge(int x, int y)
{
	int px, py;

	px = find(x);
	py = find(y);

	if (px != py)
		uf[py] = px;

	return;
}

int main(void)
{
	int t;

	scanf("%d", &t);
	while (t--) {
		int n;
		scanf("%d", &n);
		for (int i = 0; i < n; i++)
			scanf("%d %d %d", &ops[i].i, &ops[i].j, &ops[i].e);

		sort(ops, ops + n, cmp);

		uf.clear();
		bool flag = false;
		for (int i = 0; i < n; i++) {
			if (ops[i].e == 1) {
				merge(ops[i].i, ops[i].j);
			} else {
				int pi, pj;
				pi = find(ops[i].i);
				pj = find(ops[i].j);
				if (pi == pj) {
					flag = true;
					break;
				}
			}
		}
		if (flag)
			printf("NO\n");
		else
			printf("YES\n");
	}
	return 0;
}

/**
 * https://www.luogu.com.cn/problem/P4913 
 *
 * @File:   P4913.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-10-04
 *
 */
#include <bits/stdc++.h>
using namespace std;

struct node {
	int l, r;
	node (int _l, int _r) {
		l = _l;
		r = _r;
	}

	node () {
		l = r = 0;
	}
} nodes[1000006];

int dfs(int n)
{
	int r, l;

	r = nodes[n].r;
	l = nodes[n].l;
	if (r == 0 && l == 0)  // 到达叶子结点
		return 1;

	// 从左右子树中选一个最深的
	return max(dfs(r), dfs(l)) + 1;
}

int main(void)
{
	int n;

	cin >> n;

	for (int i = 1; i <= n; i++) {
		int r, l;
		cin >> l >> r;
		nodes[i] = node(l, r);
	}
	cout << dfs(1) << endl;
	return 0;
}

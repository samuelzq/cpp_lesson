/**
 * https://www.luogu.com.cn/problem/P3884
 *
 * @File:   P2884.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-11-24
 *
 */
#include <bits/stdc++.h>
using namespace std;

vector<int> neighber[110];
int b[110] = {0};

struct node {
	int val;
	node *left;
	node *right;

	node() {
		val = 0;
		left = right = NULL;
	}
} tree[110];

node *ptree[110] = {0};

node *find_lca(node *root, int x, int y)
{
	node *left, *right;

	if (!root || root->val == x ||root->val == y)
		return root;

	left = find_lca(root->left, x, y);
	right = find_lca(root->right, x, y);

	if (left && right) // x，y分别在左右子树
		return root;
	else if (left)     // x，y同时在左子树
		return left;
	else               // x，y同时在右子树
		return right;
}

int find_dep(node *root)
{
	if (!root)
		return 0;

	return max(find_dep(root->left), find_dep(root->right)) + 1;
}

int find_width(node *root)
{
	int maxwidth = 1;
	int current_width = 1;
	int next_width = 0;
	queue<node *> q;

	q.push(root);
	while (!q.empty()) {
		node *n = q.front();
		current_width--;
		q.pop();

		if (n->left) {
			q.push(n->left);
			next_width++;
		}

		if (n->right) {
			q.push(n->right);
			next_width++;
		}

		if (current_width == 0) {
			if (next_width > maxwidth)
				maxwidth = next_width;
			current_width = next_width;
			next_width = 0;
		}
	}
	return maxwidth;
}

int dist2target(node *n, int x)
{
	int l, r;

	if (!n)
		return 0;

	if (n->val == x)
		return 1;

	l = dist2target(n->left, x);
	r = dist2target(n->right, x);

	if (l == 0 && r == 0)
		return 0;
	else if (l)
		return l + 1;
	else
		return r + 1;
}

// 根据无向边构建二叉树
void build_tree(int idx)
{
	if (b[idx])
		return;
	b[idx] = 1;
	tree[idx].val = idx;
	tree[idx].left = tree[idx].right = NULL;

	int m = 0;
	for (int i = 0; i < neighber[idx].size(); i++) {
		int c = neighber[idx][i];
		if (b[c])
			continue;
		if (m == 0)
			tree[idx].left = &tree[c];
		else
			tree[idx].right = &tree[c];
		m++;
		build_tree(c);
	}
}
int main(void)
{
	int n, x, y;

	cin >> n;

	for (int i = 0; i < n - 1; i++) {
		int u, v;
		cin >> u >> v;

		neighber[u].push_back(v);
		neighber[v].push_back(u);
	}
	cin >> x >> y;

	build_tree(1);
	cout << find_dep(&tree[1]) << endl;
	cout << find_width(&tree[1]) << endl;

	node *lca;
	lca = find_lca(&tree[1], x, y);

	int l, r;
	l = dist2target(lca, x);
	r = dist2target(lca, y);
	if (l)
		l--;
	if (r)
		r--;
	cout << 2 * l + r << endl;
	return 0;
}

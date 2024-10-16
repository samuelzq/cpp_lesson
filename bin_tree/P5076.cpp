/**
 *
 * @File:   P5076.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-10-04
 *
 */
#include <bits/stdc++.h>
using namespace std;

// 定义二叉搜索树节点结构，增加左右子树节点统计数字段
struct Node {
	int val;
	Node *left;
	Node *right;
	int leftCount;  // 左子树节点数
	int rightCount; // 右子树节点数

	Node () {
		val = leftCount = rightCount = 0;
		left = right = NULL;
	}

	int count () {
		return this->leftCount + this->rightCount + 1;
	}
};

const int INF = 0x7fffffff;
Node nodes[10004];
int idx = 0;

// 更新节点的子树节点统计数
void updateNodeCounts(Node *node)
{
	node->leftCount = (node->left != NULL) ? node->left->leftCount + node->left->rightCount + 1 : 0;
	node->rightCount = (node->right != NULL) ? node->right->leftCount + node->right->rightCount + 1 : 0;
}

// 插入节点到二叉搜索树中，并更新子树节点统计数  
Node *insertNode(Node *root, int val)
{
	if (root == NULL) {
		nodes[idx].val = val;
		nodes[idx].leftCount = 0;
		nodes[idx].rightCount = 0;
		nodes[idx].left = NULL;
		nodes[idx].right = NULL;
		return &nodes[idx++];
	}
	if (val < root->val) {
		root->left = insertNode(root->left, val);
	} else {
		root->right = insertNode(root->right, val);
	}
	updateNodeCounts(root); // 更新当前节点的子树节点统计数
	return root;
}

// 在二叉搜索树中查询节点（此函数不更新子树节点统计数）
Node *searchNode(Node *root, int val)
{
	if (root == NULL || root->val == val) {
		return root;
	}

	if (val < root->val) {
		return searchNode(root->left, val);
	} else {
		return searchNode(root->right, val);
	}
}

// 获取节点的总节点数（左子树+右子树+1
int getTotalNodeCount(Node* node)
{
	if (node == NULL) {
		return 0;
	}
	return node->leftCount + node->rightCount + 1;
}

int getRank(Node *root, int x)
{
	if (!root)
		return INF;

	if (root->leftCount + 1 == x)
		return root->val;
	else if (root->leftCount + 1 > x)
		return getRank(root->left, x - 1);
	else // if (root->leftCount < x)
		return getRank(root->right, x - 1 - root->leftCount);
}

int getPre(Node *root, int x)
{
	if (!root)
		return -INF;

	if (root->val >= x)
		return getPre(root->left, x);
	else
		return max(root->val, getPre(root->right, x));
}

int getPost(Node *root, int x)
{
	if (!root)
		return INF;

	if (root->val <= x)
		return getPost(root->right, x);
	else
		return min(root->val, getPost(root->left, x));
}

int main()
{
	int n;
	Node *root = NULL;

	cin >> n;
	for (int i = 0; i < n; i++) {
		int o, x;
		cin >> o >> x;
		switch (o) {
			case 5:
				root = insertNode(root, x);
				break;
			case 1:
			{
				Node *c = searchNode(root, x);
				int rc = (c) ? c->count() : 0;
				//cout << root->count() << ' ' << rc << endl;
				cout << root->count() - rc + 1 << endl;
				break;
			}
			case 2:
			{
				cout << getRank(root, x) << endl;
				break;
			}
			case 3:
				cout << getPre(root, x) << endl;
				break;
			case 4:
				cout << getPost(root, x) << endl;
				break;
		}
	}
    return 0;
}

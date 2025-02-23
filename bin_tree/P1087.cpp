/**
 * https://www.luogu.com.cn/problem/P1087
 *
 * @File:   P1087.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-11-23
 *
 */
#include <bits/stdc++.h>
using namespace std;

char tree[3056] = {0};

int maxn = 0;

void post_order(int i)
{
	if (!tree[i])
		return;

	post_order(i * 2 + 1);
	post_order(i * 2 + 2);
	cout << tree[i];
}

// 检测字符串的类型
char check(string str, int l, int r)
{
	char f = str[l];
	char ret;

	if (f == '1')
		ret = 'I';
	else
		ret = 'B';

	for (int i = l + 1; i <= r; i++) {
		if (str[i] != f) {
			return 'F';
		}
	}
	return ret;
}

// 	前序遍历构造二叉树
void pre_construct(string str, int i)
{
	int len = str.length();

	tree[i] = check(str, 0, len - 1);
	if (len == 1)
		return;
	pre_construct(str.substr(0, len / 2), i * 2 + 1);
	pre_construct(str.substr(len / 2, len / 2), i * 2 + 2);
}

int main(void)
{
	int n;
	string str;

	cin >> n >> str;
	maxn = (1 << (n + 1)) - 1;

    // 首先构造叶子结点
	for (int i = 0; i < str.length(); i++) {
		if (str[i] == '1')
			tree[(1 << n) - 1 + i] = 'I';
		else
			tree[(1 << n) - 1 + i] = 'B';
	}

    // 由于是一个完全平衡二叉树，因此从叶子结点开始依次构建每一个中间结点
	for (int i = n - 1; i >= 0; i--) {
		int b = (1 << i) - 1;
		for (int j = 0; j < (1 << i); j++) {
			int idx = b + j;
			if (tree[2 * idx + 1] == tree[2 * idx + 2]) {
				tree[idx] = tree[2 * idx + 1];
			} else {
				tree[idx] = 'F';
			}
		}
	}
#if 0
	for (int i = 0; i < (1 << (n + 1)) - 1; i++)
		cout << tree[i];
	cout << endl;
#endif
	post_order(0);
	cout << endl;
	return 0;
}

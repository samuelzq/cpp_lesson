/**
 * https://www.luogu.com.cn/problem/P1160
 *
 * @File:   P1160.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-09-29
 *
 */
#include <bits/stdc++.h>
using namespace std;

struct Node {
	int data;
	Node *prev;
	Node *next;

	Node (int d) { // Constructor with data
		data = d;
		prev = next = nullptr;
	}

	Node () { // Default constructor 必须的
		data = 0;
		prev = next = nullptr;
	}
};

Node stu[100005]; // 由于使用数组，默认构造函数是必须的
int len = 0;

// 删除pos
void del(int pos)
{
	struct Node *curr = &stu[pos];

	if (curr->data == 0)  // 当前node已经被删除
		return;

	curr->prev->next = curr->next;
	curr->next->prev = curr->prev;
	curr->data = 0;
	curr->next = curr->prev = nullptr;
}

// 将x插在y的后面
void ins_back(int x, int y)
{
	struct Node *prv, *curr;

	curr = &stu[x];
	curr->data = x;

	prv = &stu[y];
	curr->next = prv->next;
	curr->prev = prv;
	prv->next->prev = curr;
	prv->next = curr;
}

// 将x插在y的前面
void ins_front(int x, int y)
{
	struct Node *nxt, *curr;

	curr = &stu[x];
	curr->data = x;

	nxt = &stu[y];
	curr->next = nxt;
	curr->prev = nxt->prev;
	nxt->prev->next = curr;
	nxt->prev = curr;
}

int main(void)
{
	int n, m;

	cin >> n;

	// stu[0]被当作链表的头
	stu[0].data = 0;
	stu[0].prev = stu[0].next = &stu[0];

	ins_back(1, 0);

	for (int i = 2; i <= n; i++) {
		int k, p;
		cin >> k >> p;

		if (p == 0) {<D-s>
			ins_front(i, k);
		} else {
			ins_back(i, k);
		}
	}

	Node *cur = stu[0].next;
#if 0
	while (cur && cur != &stu[0]) {
		cout << cur->data << ' ';
		cur = cur->next;
	}
#endif
	cin >> m;

	for (int i = 0; i < m; i++) {
		int p;
		cin >> p;
		del(p);
	}

	cur = stu[0].next;
	while (cur && cur != &stu[0]) {
		cout << cur->data << ' ';
		cur = cur->next;
	}
	return 0;
}

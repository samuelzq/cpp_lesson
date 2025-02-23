/**
 * https://www.luogu.com.cn/problem/P1305
 *
 * @File:   P1305.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-11-23
 *
 */
#include <bits/stdc++.h>
using namespace std;

struct node {
	int l, r;
	node() {l = r = 0;};
} bin[27];

void pre_order(int x)
{
	cout << (char)(x + 'a');

	if (bin[x].l >= 0)
		pre_order(bin[x].l);

	if (bin[x].r >= 0)
		pre_order(bin[x].r);
}

int main(void)
{
	int n, root;

	cin >> n;

	for (int i = 0; i < n; i++) {
		char l, c, r;
		int idx;
		cin >> c >> l >> r;
		idx = c - 'a';
		if (i == 0)
			root = idx;
		if (l != '*')
			bin[idx].l = l - 'a';
		else
			bin[idx].l = -1;

		if (r != '*')
			bin[idx].r = r - 'a';
		else
			bin[idx].r = -1;
	}

	pre_order(root);
	cout << endl;
	return 0;

}

/**
 * https://www.luogu.com.cn/problem/P1525
 * @File:   P1525.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-12-08
 *
 */
#include <bits/stdc++.h>
using namespace std;

int p[40004];
struct cm {
	int a;
	int b;
	int v;

	cm() {a = b = v = 0;}
	cm (int _a, int _b, int _v) {
		a = _a;
		b = _b;
		v = _v;
	}
} cms[100004];

bool cmp(cm &c1, cm &c2)
{
	return c1.v > c2.v;
}

int find(int x)
{
	return (x != p[x]) ? p[x] = find(p[x]) : x;
}

int add(int x, int y)
{
	int fx, fy;

	fx = find(x);
	fy = find(y);

	if (fx == fy)
		return fx;

	return p[fy] = fx;
}

int main(void)
{
	int n, m;

	cin >> n >> m;
	for (int i = 0; i <= n; i++) {
		p[i] = i;
		p[i + n] = i + n;
	}

	for (int i = 0; i < m; i++) {
		int a, b, v;
		cin >> a >> b >> v;
		cms[i] = cm(a, b, v);
	}

	// 使用贪心算法，首先将冲突系数比较大的两人分开
	sort(cms, cms + m, cmp);

	int out;
	out = 0;
	for (int i = 0; i < m; i++) {
		int fa, fb;
		fa = find(cms[i].a);
		fb = find(cms[i].b);

		// 两人已经在同一组无法分开了
		if (fa == fb) {
			out = cms[i].v;
			break;
		}

		// 将两人分别安置在不同的组，同时入组的还有两人的敌人
		add(cms[i].a, cms[i].b + n);
		add(cms[i].a + n, cms[i].b);
	}
	cout << out << endl;
	return 0;
}

/**
 * https://www.luogu.com.cn/problem/P9484
 *
 * @File:   P9484.cpp
 * @Author: Lao Zhang <samuelzhang77@yahoo.com>
 * @Date:   2024-06-12
 *
 **/
#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
	return b ? gcd(b, a % b) : a;
}

int main(void)
{
	int t;

	scanf("%d", &t);

	while (t--) {
		int n, q;
		scanf("%d %d", &n, &q);

		while (q--) {
			int a, b, g;
			scanf("%d %d", &a, &b);
			if (a < b)
				swap(a, b);

			// 图中两个结点之间的过渡结点一定是这两个结点的GCD
			g = gcd(a, b);
			printf("%d\n", a + b - 2 * g);
		}
	}
	return 0;
}

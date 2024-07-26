/**
 * https://www.luogu.com.cn/problem/P10606
 *
 * @File:   P10606.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2024-07-26
 *
 **/
#include <bits/stdc++.h>
using namespace std;

#define N 200005
int a[N] = {0};

int main(void)
{
	int maxm, minm;
	int n, m;

	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++)
		scanf("%d", &a[i]);

	maxm = -1;
	minm = 1e8;

	for (int i = 0; i < m; i++) {
		int x, y;
		scanf("%d %d", &x, &y);
		maxm = max(maxm, x);
	}

	for (int i = maxm - 1; i < n; i++)
		minm = min(minm, a[i]);

	printf("%d\n", minm);
	return 0;
}

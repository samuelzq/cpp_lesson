/**
 * https://vjudge.net/problem/UVA-11805
 *
 * @File:   uva11805.cpp
 * @Author: Lao Zhang <samuelzhang77@yahoo.com>
 * @Date:   2023-09-21
 *
 **/
#include <bits/stdc++.h>

int main(void)
{
	int t, n, k, p, l;

	scanf("%d", &t);

	for (int i = 1; i <= t; i++) {
		scanf("%d %d %d", &n, &k, &p);
		l = (p + k) % n;
		printf("Case %d: %d\n", i, l ? l : n);
	}
	return 0;
}

/**
 * https://vjudge.net/problem/洛谷-P1150
 *
 * @File:   p1150_n.cpp
 * @Author: Lao Zhang <samuelzhang77@yahoo.com>
 * @Date:   2023-09-20
 *
 **/
#include <bits/stdc++.h>

int main(void)
{
	int n, k;
	int d;

	scanf("%d %d", &n, &k);
	d = n;
	while (n >= k) {
		n -= k - 1;
		d++;
	}
	printf("%d\n", d);
	return 0;
}

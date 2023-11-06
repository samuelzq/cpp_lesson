/**
 * https://vjudge.net/problem/Kattis-planina
 *
 * @File:   kattis_planina.cpp
 * @Author: Lao Zhang <samuelzhang77@yahoo.com>
 * @Date:   2023-09-20
 *
 **/
#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	int n, d;

	scanf("%d", &n);
	d = 2;
	while (n--)
		d = d * 2 - 1;
	printf("%d\n", d * d);
	return 0;
}

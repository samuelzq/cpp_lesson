/**
 * https://vjudge.net/problem/Kattis-tarifa
 *
 * @File:   kattis_tarifa.cpp
 * @Author: Lao Zhang <samuelzhang77@yahoo.com>
 * @Date:   2023-09-25
 *
 **/
#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	int x, n, out;

	scanf("%d %d", &x, &n);
	out = x;
	while (n--) {
		int t;
		scanf("%d", &t);
		out += (x - t);
	}
	printf("%d\n", out);
	return 0;
}

/**
 * https://vjudge.net/problem/Kattis-different
 *
 * @File:   kattis_different.cpp
 * @Author: Lao Zhang <samuelzhang77@yahoo.com>
 * @Date:   2023-09-25
 *
 **/
#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	long long a, b;

	while (scanf("%lld %lld", &a, &b) != EOF)
		printf("%lld\n", (a > b) ? (a - b) : (b - a));
	return 0;
}

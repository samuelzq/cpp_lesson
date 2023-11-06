/**
 * https://vjudge.net/problem/UVA-10055
 *
 * @File:   uva10055.cpp
 * @Author: Lao Zhang <samuelzhang77@yahoo.com>
 * @Date:   2023-09-26
 *
 **/
#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	long long int a, b;

	while (scanf("%lld %lld", &a, &b) != EOF) {
		printf("%lld\n", (a > b) ? (a - b) : (b - a));
	}
	return 0;
}

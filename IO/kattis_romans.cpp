/**
 * https://vjudge.net/problem/Kattis-romans
 *
 * @File:   kattis_romans.cpp
 * @Author: Lao Zhang <samuelzhang77@yahoo.com>
 * @Date:   2023-09-21
 *
 **/
#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	double x;

	scanf("%lf", &x);
	printf("%.0lf\n", x * 1000 * 5280 / 4854);
	return 0;
}

/**
 * https://vjudge.net/problem/Kattis-qaly
 *
 * @File:   kattis_qaly.cpp
 * @Author: Lao Zhang <samuelzhang77@yahoo.com>
 * @Date:   2023-09-25
 *
 **/
#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	int n;
	double q, y, out;

	scanf("%d", &n);
	out = 0;
	while (n--) {
		scanf("%lf %lf", &q, &y);
		out += q * y;
	}
	printf("%.03lf\n", out);
	return 0;
}

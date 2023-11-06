/**
 * https://vjudge.net/problem/UVA-11614
 *
 * @File:   uva11614.cpp
 * @Author: Lao Zhang <samuelzhang77@yahoo.com>
 * @Date:   2023-09-20
 *
 **/
#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	int k;

	scanf("%d", &k);

	while (k--) {
		long long n, q, p;
		scanf("%lld", &n);
		p = q = sqrt(2 * n) - 1;
		while (q * (q + 1) <= 2 * n) {
			p = q;
			q++;
		}
		printf("%lld\n", p);
	}
	return 0;
}

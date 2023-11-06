/**
 * https://www.luogu.com.cn/problem/P1420
 *
 * @File:   p1420.cpp
 * @Author: Lao Zhang <samuelzhang77@yahoo.com>
 * @Date:   2023-09-26
 *
 **/
#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	int n, l, out;
	long long int b;

	scanf("%d", &n);
	out = l = 1;
	b = -1;
	while (n--) {
		long long int a;
		scanf("%lld", &a);
		if (a - b == 1)
			l++;
		else
			l = 1;
		b = a;
		out = max(out, l);
	}
	printf("%d\n", out);
	return 0;
}

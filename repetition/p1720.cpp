/**
 * https://www.luogu.com.cn/problem/P1720
 *
 * @File:   p1720.cpp
 * @Author: Lao Zhang <samuelzhang77@yahoo.com>
 * @Date:   2023-09-25
 *
 **/
#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	int n;
	long long int a, b, f;

	scanf("%d", &n);
	a = 1;
	f = b = 0;
	for (int i = 1; i <= n; i++) {
		f = a + b;
		a = b;
		b = f;
	}
	printf("%lld.00\n", f);
	return 0;
}

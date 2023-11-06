/**
 * https://www.luogu.com.cn/problem/B2036
 *
 * @File:   B2036.cpp
 * @Author: Lao Zhang <samuelzhang77@yahoo.com>
 * @Date:   2023-09-26
 *
 **/
#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	double n;

	scanf("%lf", &n);

	if (n < -0.00000001)
		n *= -1;

	printf("%0.02lf\n", n);
	return 0;
}

/**
 * https://vjudge.net/problem/%E6%B4%9B%E8%B0%B7-P1421
 *
 * @File:   p1421.cpp
 * @Author: Lao Zhang <samuelzhang77@yahoo.com>
 * @Date:   2023-09-21
 *
 **/
#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	int a, b, c;

	scanf("%d %d", &a, &b);
	c = a * 10 + b;
	printf("%d\n", c / 19);
	return 0;
}

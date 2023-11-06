/**
 * https://www.luogu.com.cn/problem/P5718
 *
 * @File:   p5720.cpp
 * @Author: Lao Zhang <samuelzhang77@yahoo.com>
 * @Date:   2023-09-25
 *
 **/
#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	int a, i;

	scanf("%d", &a);
	i = 1;
	while (a > 1) {
		i++;
		a /= 2;
	}
	printf("%d\n", i);
	return 0;
}

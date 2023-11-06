/**
 * https://www.luogu.com.cn/problem/B2037
 *
 * @File:   B2037.cpp
 * @Author: Lao Zhang <samuelzhang77@yahoo.com>
 * @Date:   2023-09-26
 *
 **/
#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	int n;

	scanf("%d", &n);
	if (n % 2)
		printf("odd\n");
	else
		printf("even\n");
	return 0;
}

/**
 * https://www.luogu.com.cn/problem/P5725
 *
 * @File:   p5725.cpp
 * @Author: Lao Zhang <samuelzhang77@yahoo.com>
 * @Date:   2023-09-25
 *
 **/
#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	int n, k;

	scanf("%d", &n);

	k = 1;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++)
			printf("%02d", k++);
		printf("\n");
	}
	printf("\n");
	k = 1;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n - i; j++)
			printf("  ");
		for (int j = 1; j <= i; j++)
			printf("%02d", k++);
		printf("\n");
	}
	return 0;
}

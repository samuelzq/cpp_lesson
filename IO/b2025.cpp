/**
 * https://www.luogu.com.cn/problem/B2025
 *
 * @File:   b2025.cpp
 * @Author: Lao Zhang <samuelzhang77@yahoo.com>
 * @Date:   2023-10-26
 *
 **/
#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	for (int i = 1; i <= 3; i++) {
		for (int j = 3 - i; j > 0; j--)
			printf(" ");
		for (int j = 1; j <= 2 * i - 1; j++)
			printf("*");
		printf("\n");
	}
	for (int i = 2; i > 0; i--) {
		for (int j = 3 - i; j > 0; j--)
			printf(" ");
		for (int j = 1; j <= 2 * i - 1; j++)
			printf("*");
		printf("\n");
	}
	return 0;
}

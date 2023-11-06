/**
 * https://www.luogu.com.cn/problem/B2005
 *
 * @File:   b2005.cpp
 * @Author: Lao Zhang <samuelzhang77@yahoo.com>
 * @Date:   2023-10-26
 *
 **/
#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	char c;
	int i;

	scanf("%c", &c);

	for (int i = 1; i <= 3; i++) {
		for (int j = 3 - i; j > 0; j--)
			printf(" ");
		for (int j = 1; j <= 2 * i - 1; j++)
			printf("%c", c);
		printf("\n");
	}
	return 0;
}

/**
 * https://www.luogu.com.cn/problem/P8535
 *
 * @File:   P8535.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2024-07-26
 *
 **/
#include <bits/stdc++.h>
using namespace std;
char c[200005];

int main(void)
{
	int n, i;
	string str;

	scanf("%d", &n);
	i = 0;
	while (n >= 5) {
		c[i++] = '1';
		n -= 5;
	}

	i--;
	if (n >= 3)
		c[i] = '2';

	while (i >= 0)
		putchar(c[i--]);
	putchar('\n');
	return 0;
}

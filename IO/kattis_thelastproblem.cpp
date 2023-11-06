/**
 * https://vjudge.net/problem/Kattis-thelastproblem
 *
 * @File:   kattis_thelastproblem.cpp
 * @Author: Lao Zhang <samuelzhang77@yahoo.com>
 * @Date:   2023-09-20
 *
 **/
#include <bits/stdc++.h>

int main(void)
{
	int i;
	char c, buf[100];

	i = 0;
	do {
		c = getchar();
		buf[i++] = c;
	} while (c != '\n');
	buf[i - 1] = 0;
	printf("Thank you, %s, and farewell!\n", buf);
	return 0;
}

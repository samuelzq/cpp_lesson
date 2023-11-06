/**
 * https://vjudge.net/problem/Kattis-faktor
 *
 * @File:   kattis_faktor.cpp
 * @Author: Lao Zhang <samuelzhang77@yahoo.com>
 * @Date:   2023-09-20
 *
 **/
#include <bits/stdc++.h>

int main(void)
{
	int a, i;

	scanf("%d %d", &a, &i);
	printf("%d\n", a * (i - 1) + 1);
	return 0;
}

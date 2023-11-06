/**
 * https://vjudge.net/problem/UVA-10071
 *
 * @File:   uva10071.cpp
 * @Author: Lao Zhang <samuelzhang77@yahoo.com>
 * @Date:   2023-09-20
 *
 **/
#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	int v, t;

	while (scanf("%d %d", &v, &t) != EOF)
		printf("%d\n", 2 * v * t);
	return 0;
}

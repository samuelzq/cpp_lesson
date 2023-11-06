/**
 * https://vjudge.net/problem/UVA-11044
 *
 * @File:   uva11044.cpp
 * @Author: Lao Zhang <samuelzhang77@yahoo.com>
 * @Date:   2023-09-25
 *
 **/
#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	int c, n, m, x;

	scanf("%d", &c);

	while (c--) {
		scanf("%d %d", &n, &m);

		x = 0;
		for (int i = 2; i < n; i += 3) {
			for (int j = 2; j < m; j += 3)
				x++;
		}
		printf("%d\n", x);
	}
	return 0;
}

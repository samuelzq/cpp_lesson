/**
 * https://vjudge.net/problem/Kattis-carrots
 *
 * @File:   karris_carrots.cpp
 * @Author: Lao Zhang <samuelzhang77@yahoo.com>
 * @Date:   2023-09-20
 *
 **/
#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	int n, p;
	char c;

	scanf("%d %d%c", &n, &p, &c);
	while (n--) {
		do {
			c = getchar();
		} while ('\n' != c);
	}
	printf("%d\n", p);
	return 0;
}

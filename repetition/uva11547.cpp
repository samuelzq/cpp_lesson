/**
 * https://vjudge.net/problem/UVA-11547
 *
 * @File:   uva11547.cpp
 * @Author: Lao Zhang <samuelzhang77@yahoo.com>
 * @Date:   2023-09-26
 *
 **/
#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	int t;

	scanf("%d", &t);
	while (t--) {
		int r, n;
		scanf("%d", &n);
		r = (n * 567 / 9 + 7492) * 235 / 47 - 498;
		if (r < 0)
			r *= -1;
		printf("%d\n", (r % 100) / 10);
	}
	return 0;
}

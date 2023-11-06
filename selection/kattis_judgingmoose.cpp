/**
 * https://vjudge.net/problem/Kattis-judgingmoose
 *
 * @File:   kattis_judgingmoose.cpp
 * @Author: Lao Zhang <samuelzhang77@yahoo.com>
 * @Date:   2023-09-26
 *
 **/
#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	int l, r;

	scanf("%d %d", &l, &r);

	if (l == r) {
		if (l == 0)
			printf("%s\n", "Not a moose");
		else
			printf("Even %d\n", 2 * r);
	} else {
		printf("Odd %d\n", 2 * max(l, r));
	}

	return 0;
}

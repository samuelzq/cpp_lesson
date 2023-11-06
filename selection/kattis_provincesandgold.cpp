/**
 * https://vjudge.net/problem/Kattis-provincesandgold
 *
 * @File:   kattis_provincesandgold.cpp
 * @Author: Lao Zhang <samuelzhang77@yahoo.com>
 * @Date:   2023-09-26
 *
 **/
#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	int g, s, c, t;
	const char *vic, *tre;

	scanf("%d %d %d", &g, &s, &c);
	t = g * 3 + s * 2 + c * 1;

	if (t >= 8) {
		tre = "Gold";
		vic = "Province";
	} else if (t >= 6) {
		tre = "Gold";
		vic = "Duchy";
	} else if (t >= 5) {
		tre = "Silver";
		vic = "Duchy";
	} else if (t >= 3) {
		tre = "Silver";
		vic = "Estate";
	} else if (t >= 2) {
		tre = "Copper";
		vic = "Estate";
	} else {
		tre = "Copper";
		vic = 0;
	}

	if (!vic)
		printf("%s\n", tre);
	else
		printf("%s or %s", vic, tre);

	return 0;
}

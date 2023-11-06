/**
 * https://vjudge.net/problem/Kattis-onechicken
 *
 * @File:   kattis_onechicken.cpp
 * @Author: Lao Zhang <samuelzhang77@yahoo.com>
 * @Date:   2023-09-26
 *
 **/
#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	int n, m;

	scanf("%d %d", &n, &m);

	if (n <= m)
		printf("Dr. Chaz will have %d piece%sof chicken left over!\n",
			m - n, (m - n) > 1 ? "s " : " ");
	else
		printf("Dr. Chaz needs %d more piece%sof chicken!\n",
			n - m, (n - m) > 1 ? "s " : " ");
	return 0;
}

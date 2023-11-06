/**
 * https://vjudge.net/problem/UVA-01124
 *
 * @File:   uva1124.cpp
 * @Author: Lao Zhang <samuelzhang77@yahoo.com>
 * @Date:   2023-09-25
 *
 **/
#include <bits/stdc++.h>

using namespace std;

char buf[4096];

int main(void)
{
	int i = 0;
	while (scanf("%c", buf + i) != EOF)
		i++;
	buf[i] = 0;
	printf("%s", buf);
	return 0;
}

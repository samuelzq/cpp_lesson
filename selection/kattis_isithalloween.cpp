/**
 * https://vjudge.net/problem/Kattis-isithalloween
 *
 * @File:   kattis_isithalloween.cpp
 * @Author: Lao Zhang <samuelzhang77@yahoo.com>
 * @Date:   2023-09-26
 *
 **/
#include <bits/stdc++.h>

using namespace std;
const char *Y = "yup";
const char *N = "nope";

int main(void)
{
	char buf[16];
	int n;
	const char *out;

	scanf("%s %d", buf, &n);

	if (!memcmp(buf, "OCT", 3) && n == 31)
		out = Y;
	else if (!memcmp(buf, "DEC", 3) && n == 25)
		out = Y;
	else
		out = N;

	printf("%s\n", out);
	return 0;
}

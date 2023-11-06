/**
 * https://vjudge.net/problem/Kattis-moscowdream
 *
 * @File:   kattis_moscowdream.cpp
 * @Author: Lao Zhang <samuelzhang77@yahoo.com>
 * @Date:   2023-09-26
 *
 **/
#include <bits/stdc++.h>

using namespace std;

const char *YES = "YES";
const char *NO  = "NO";

int main(void)
{
	int a, b, c, n;
	const char *out;

	scanf("%d %d %d %d", &a, &b, &c, &n);
	if (a == 0 || b == 0 || c == 0 || n < 3)
		out = NO;
	else if (a + b + c < n)
		out = NO;
	else
		out = YES;
	printf("%s\n", out);
	return 0;
}

/**
 * https://www.luogu.com.cn/problem/B2035
 *
 * @File:   b2035.cpp
 * @Author: Lao Zhang <samuelzhang77@yahoo.com>
 * @Date:   2023-09-26
 *
 **/
#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	long long int a;
	const char *out;

	scanf("%lld", &a);
	if (a > 0)
		out = "positive";
	else if (a == 0)
		out = "zero";
	else
		out = "negative";
	printf("%s\n", out);
	return 0;
}

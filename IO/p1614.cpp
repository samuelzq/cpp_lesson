/**
 * https://vjudge.net/problem/%E6%B4%9B%E8%B0%B7-P1614
 *
 * @File:   p1614.cpp
 * @Author: Lao Zhang <samuelzhang77@yahoo.com>
 * @Date:   2023-09-21
 *
 **/
#include <bits/stdc++.h>

using namespace std;
const int N = 3000 + 0xAC;
int sum[N];

int main(void)
{
	int n, m, out, i, a;

	scanf("%d %d", &n, &m);
	i = 1;
	sum[0] = 0;

	for (i = 1; i <= n; i++) {
		scanf("%d", &a);
		sum[i] = sum[i - 1] + a;
	}

	out = sum[m];
	for (i = m; i <= n; i++)
		out = min(out, sum[i] - sum[i - m]);
	printf("%d\n", out);
	return 0;
}

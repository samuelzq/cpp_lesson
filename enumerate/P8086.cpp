/**
 * https://www.luogu.com.cn/problem/P8086
 *
 * @File:   P8086.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2024-07-29
 *
 **/
#include <bits/stdc++.h>
using namespace std;

int b[10000007] = {0};

int main(void)
{
	int n;
	long long ans;

	scanf("%d", &n);

	ans = 0;
	while (n--) {
		long long int t, x;

		scanf("%lld %lld", &x, &t);
		if (t <= 1 || b[x])
			continue;
		b[x] = 1;
		ans += t;
	}
	printf("%lld\n", ans);
	return 0;
}

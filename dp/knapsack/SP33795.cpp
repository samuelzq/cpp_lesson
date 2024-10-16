/**
 * https://www.luogu.com.cn/problem/AT_dp_d
 *
 * @File:   SP33795.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2024-10-16
 *
 **/
#include <bits/stdc++.h>
using namespace std;

#define LL long long

LL a[22] = {0};
LL ans = 0;
LL n, m;

void dfs(int i, LL w)
{
	if (w > m)
		return;

	if (i == n) {
		ans = max(ans, w);
		return;
	}

	dfs(i + 1, w + a[i]);
	dfs(i + 1, w);
}

int main(void)
{
	int t;

	scanf("%d", &t);

	while (t--) {
		ans = 0;
		scanf("%lld %lld", &n, &m);

		for (int i = 0; i < n; i++)
			scanf("%lld", &a[i]);

		dfs(0, 0);
		printf("%lld\n", ans);
	}
	return 0;
}

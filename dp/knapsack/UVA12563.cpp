/**
 * https://vjudge.net/problem/UVA-12563#google_vignette
 *
 * @File:   UVA12563.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2024-11-05
 *
 **/
#include <bits/stdc++.h>
using namespace std;

int a[55];
int dp[10000];   // 50 * 180

int main(void)
{
	int t;

	scanf("%d", &t);
	for (int i = 1; i <= t; i++) {
		int n, total;
		int ans_t, ans_c;
		scanf("%d %d", &n, &total);

		for (int i = 1; i <= n; i++)
			scanf("%d", &a[i]);

		memset(dp, -1, sizeof(dp));  // -1表示没有选择任何歌曲，不能由该状态推导过来
		dp[0] = 0;

		for (int i = 1; i <= n; i++) {
			for (int j = total - 1; j >= a[i]; j--) {
				dp[j] = max(dp[j], dp[j - a[i]] + 1);
			}
		}

		ans_t = ans_c = 0;
		for (int i = total - 1; i > 0; i--) {
			if (dp[i] > ans_c) { // 选取所唱歌曲最多的状态
				ans_c = dp[i];
				ans_t = i;
			}
		}
		printf("Case %d: %d %d\n", i, ans_c + 1, ans_t + 678);
	}
}

/**
 * https://www.luogu.com.cn/problem/P1853
 *
 * @File:   AT_abc327_e.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2024-10-21
 *
 **/
#include <bits/stdc++.h>
using namespace std;

int q[5010];
double dp[5010] = {0};

int main(void)
{
	int n;
	double s, ans = -1000000.0;

	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
		scanf("%d", &q[i]);

	for (int i = 1; i <= n; i++) {
		for (int j = i; j >= 1; j--) {  // 注意：背包容量上限是变化的
			dp[j] = max(dp[j], dp[j - 1] * 0.9 + q[i]);
		}
	}

	s = 0;
	for (int i = 1; i <= n; i++) {
		s = s * 0.9 + 1;
		ans = max(ans, dp[i] / s - 1200 / sqrt(i));
	}
	printf("%.15lf\n", ans);
	return 0;
}

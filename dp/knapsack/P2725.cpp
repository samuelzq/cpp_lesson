/**
 * https://www.luogu.com.cn/problem/P2725
 *
 * @File:   P2725.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2024-11-05
 *
 **/
#include <bits/stdc++.h>
using namespace std;

int a[55];
int dp[2000005] = {0};

int main(void)
{
	int k, n, maxa;

	cin >> k >> n;
	maxa = 0;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		maxa = max(maxa, a[i]);
	}

	sort(a, a + n + 1);   // 先排序，为了压缩选择的空间
	maxa *= k;
	memset(dp, 0x3f, sizeof(dp));
	dp[0] = 0;
	for (int i = 1; i <= n; i++) {
		for (int j = a[i]; j <= a[i] * k; j++) {
			if (dp[j - a[i]] < min(k, dp[j] - 1))  // 判断有更佳的选择
				dp[j] = dp[j - a[i]] + 1;
		}
	}

	int j = 1;
	while (dp[j] != 0x3f3f3f3f)
		j++;

	cout << j - 1 << endl;
	return 0;
}

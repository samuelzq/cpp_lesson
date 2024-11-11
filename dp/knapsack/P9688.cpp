/**
 * https://www.luogu.com.cn/problem/P9688
 *
 * @File:   P9688.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2024-11-11
 *
 **/
#include <bits/stdc++.h>
using namespace std;

#define N 505
int cnt[N], a[N], b[N], l[N] = {0}, r[N] = {0};
long long int dp[N][N];
// dp[i][j] 表示考虑前 i 种颜色并选用第 i 种颜色，一共选择了 j 种颜色的最大价值

int main(void)
{
	int n, k;
	long long int ans;

	cin >> n >> k;
	for (int i = 1; i <= n; i++) {
		int t;
		cin >> t;
		a[i] = t;
		if (l[t] == 0)
			l[t] = i;
		r[t] = i;
	}

	for (int i = 1; i <= n; i++)
		cin >> b[i];

	memset(dp, -0x3f, sizeof(dp));
	dp[0][0] = 0;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= k; j++) {
			if (j > i)  // 从i种颜色中做选择，选择的结果不能大于i
				break;
			for (int m = 0; m < i; m++) { // 从所有不包含第i种颜色的方案中推导包含i的最优解
				if (m >= j - 1 && (a[i] > a[m]) && (l[a[i]] > r[a[m]]))
					dp[i][j] = max(dp[i][j], dp[m][j - 1] + b[a[i]]);
			}
		}
	}

	ans = -1;
	for (int i = 1; i <= n; i++)
		ans = max(dp[i][k], ans);
	cout << ans << endl;
	return 0;
}

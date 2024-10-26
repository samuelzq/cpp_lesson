/**
 * https://www.luogu.com.cn/problem/P2918
 *
 * @File:   P2918.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2024-10-21
 *
 **/
#include <bits/stdc++.h>
using namespace std;

#define LL long long
LL dp[150004] = {0};
LL p[110], c[110];

int main(void)
{
	int n, h;
	LL m, ans;

	cin >> n >> h;
	m = 0;
	for (int i = 1; i <= n; i++) {
		cin >> p[i] >> c[i];
		m = max(m, p[i]);
	}

	// 本题要求采购到至少 H 磅干草，有可能多于H磅干草
	// 因此状态转移时，背包上限需要增加一个最重的干草
	memset(dp, 0x3f, sizeof(dp));
	dp[0] = 0;
	for (int i = 1; i <= n; i++)
		for (int j = p[i]; j <= h + m; j++)
			dp[j] = min(dp[j], dp[j - p[i]] + c[i]);

	ans = dp[h];
	// 从h开始找到一个最小的开销
	for (int i = h; i <= h + m; i++)
		ans = min(ans, dp[i]);
	cout << ans << endl;
	return 0;
}

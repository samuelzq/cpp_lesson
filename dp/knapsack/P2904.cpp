/**
 * https://www.luogu.com.cn/problem/P2904
 *
 * @File:   P2904.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2024-11-01
 *
 **/
#include <bits/stdc++.h>
using namespace std;

int sum[2600];
int dp[2600] = {0};

int main(void)
{
	int n, m;

	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		int a;
		cin >> a;
		sum[i] = sum[i - 1] + a;  // 前i头奶牛总共累加的时间
	}

	memset(dp, 0x3f, sizeof(dp));
	dp[0] = 0;
	for (int i = 1; i <= n; i++) {
		for (int j = i; j <= n; j++)   // 选择的数目可以重复，因此是完全背包
			dp[j] = min(dp[j], dp[j - i] + sum[i] + 2 * m);
	}
	cout << dp[n] - m << endl; //最后一次不需要返航，因此减去m
	return 0;
}

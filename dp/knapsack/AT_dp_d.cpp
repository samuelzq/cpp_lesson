/**
 * https://www.luogu.com.cn/problem/AT_dp_d
 *
 * @File:   AT_dp_d.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2024-10-16
 *
 **/
#include <bits/stdc++.h>
using namespace std;

#define LL long long

LL dp[100005] = {0};
LL w[110], v[110];

int main(void)
{
	int n, l;

	cin >> n >> l;
	for (int i = 1; i <= n; i++)
		cin >> w[i] >> v[i];

	for (int i = 1; i <= n; i++)
		for (int j = l; j >= w[i]; j--)
			dp[j] = max(dp[j], dp[j - w[i]] + v[i]);

	cout << dp[l] << endl;
	return 0;
}

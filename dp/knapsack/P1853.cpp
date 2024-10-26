/**
 * https://www.luogu.com.cn/problem/P1853
 *
 * @File:   P1853.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2024-10-21
 *
 **/
#include <bits/stdc++.h>
using namespace std;

int dp[5000006] = {0};
int a[44], b[44];

int main(void)
{
	int s, n, d;

	cin >> s >> n >> d;
	for (int i = 1; i <= d; i++) {
		cin >> a[i] >> b[i];
		a[i] /= 1000;
	}

	dp[0] = 0;
	for (int l = 1; l <= n; l++) {
		dp[0] = 0;
		for (int i = 1; i <= d; i++) {
			for (int j = a[i]; j <= s / 1000; j++) {
				dp[j] = max(dp[j], dp[j - a[i]] + b[i]);
			}
		}
		s = dp[s / 1000] + s;  // 更新背包的上限
		//cout << s << endl;
	}
	cout << s << endl;
	return 0;
}

/**
 * https://www.luogu.com.cn/problem/P8742
 *
 * @File:   P8742.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2024-10-18
 *
 **/
#include <bits/stdc++.h>
using namespace std;

int w[110];
int dp[100005] = {0};

int main(void)
{
	int n, sum, ans;

	cin >> n;
	sum = 0;
	for (int i = 1; i <= n; i++) {
		cin >> w[i];
		sum += w[i];
	}

	dp[0] = 1;
	ans = 0;
	for (int i = 1; i <= n; i++) {  // 正向遍历所有的可能性
		for (int j = sum; j >= w[i]; j--) {
			if (dp[j - w[i]] == 1 && dp[j] == 0) {
				dp[j] = 1;
				ans++;
			}
		}
	}

	for (int i = 1; i <= n; i++) {  // 逆向遍历所有可能性
		for (int j = 0; j <= sum - w[i]; j++) {
			if (dp[j] == 0 && dp[j + w[i]] == 1) {
				dp[j] = 1;
				ans++;
			}
		}
	}
	cout << ans << endl;
	return 0;
}

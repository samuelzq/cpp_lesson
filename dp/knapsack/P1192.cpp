/**
 * https://www.luogu.com.cn/problem/P1192
 *
 * @File:   P1192.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-11-03
 *
 */
#include <bits/stdc++.h>
using namespace std;

int dp[100005] = {0};

int main(void)
{
	int n, k;

	cin >> n >> k;

	dp[0] = 1;

	for (int i = 1; i <= n; i++) {      // 先遍历背包限制
		for (int j = 1; j <= k; j++) {  // 然后遍历物品的限制
			if (i - j >= 0)
				dp[i] = (dp[i] + dp[i - j]) % 100003;
		}
	}

	cout << dp[n] << endl;
	return 0;
}

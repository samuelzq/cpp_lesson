/**
 * https://www.luogu.com.cn/problem/P1504
 *
 * @File:   P1504.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2024-10-31
 *
 **/
#include <bits/stdc++.h>
using namespace std;

int a[110];
int dp[11000] = {0};
int f[11000] = {0};

int main(void)
{
	int n, sum, maxh;

	cin >> n;

	maxh = 0;
	for (int g = 1; g <= n; g++) {
		int k, t;
		sum = k = 0;
		while (1) {
			cin >> t;
			if (t == -1)
				break;
			k++;
			a[k] = t;
			sum += t;
		}
		maxh = max(maxh, sum);

		// 推出每一组输入可以组合的不同高度
		memset(dp, 0, sizeof(dp));
		dp[0] = 1; // 0 是初始态，肯定能得到
		for (int i = 1; i <= k; i++) {
			for (int j = sum; j >= a[i]; j--) {
				if (dp[j - a[i]] && !dp[j]) {
					dp[j] = 1;
					f[j]++;    // 得到新的高度值
				}
			}
		}
	}

	for (int i = maxh; i >= 0; i--) {
		if (f[i] == n) {  // 高度值i有n个
			cout << i << endl;
			return 0;
		}
	}
	cout << 0 << endl;
	return 0;
}

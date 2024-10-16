/**
 * https://www.luogu.com.cn/problem/P2347
 *
 * @File:   P2347.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2024-10-18
 *
 **/
#include <bits/stdc++.h>
using namespace std;

int b[7] = {0, 1, 2, 3, 5, 10, 20};
int a[7] = {0};
int dp[1010] = {0};

int main(void)
{
	int sum, ans;

	sum = 0;
	for (int i = 1; i <= 6; i++) {
		cin >> a[i];
		sum += a[i] * b[i];
	}

	dp[0] = 1;
	ans = 0;
	for (int i = 1; i <= 6; i++) {
		for (int j = sum; j >= 0; j--) {
			for (int k = 0; k <= a[i]; k++) {
				if (k * b[i] <= j && dp[j] == 0 && dp[j - k * b[i]] == 1) {
					dp[j] = 1;
					ans++;
				}
			}
		}
	}
	cout << "Total=" << ans << endl;
	return 0;
}

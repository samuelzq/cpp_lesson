/**
 * https://www.luogu.com.cn/problem/P2347
 *
 * @File:   P8646.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2024-10-21
 *
 **/
#include <bits/stdc++.h>
using namespace std;

#define MAX_NUM    200010
int dp[MAX_NUM] = {0};  // 远大于101 * 101
int a[110];

int gcd(int a, int b)
{
	if (b == 0)
		return a;

	return gcd(b, a % b);
}

bool all_comp(int a[], int n)
{
	int g;

	g = a[1];
	for (int i = 2; i <= n; i++) {
		g = gcd(g, a[i]);
		if (g == 1)
			return true;
	}
	return false;
}

int main(void)
{
	int n, ans;

	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> a[i];

	if (!all_comp(a, n)) {  // 如果所有的数的最大公约数不是1，那么就有无限多的数凑不出来
		cout << "INF" << endl;
		return 0;
	}

	// 完全背包统计可能凑出的数，某个阈值之后的所有的数都能够凑出来
	dp[0] = 1;
	for (int i = 1; i <= n; i++) {
		for (int j = a[i]; j < MAX_NUM; j++) {
			if (!dp[j])
				dp[j] = dp[j - a[i]];
		}
	}

	// 统计有哪些数凑不出
	ans = 0;
	for (int i = 1; i < MAX_NUM; i++) {
		if (!dp[i])
			ans++;
	}
	cout << ans << endl;
	return 0;
}

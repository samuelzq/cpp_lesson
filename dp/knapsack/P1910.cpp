/**
 * https://www.luogu.com.cn/problem/P1910
 *
 * @File:   P1910.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2024-09-06
 *
 **/
#include <bits/stdc++.h>
using namespace std;

int dp[1010][1010] = {{0}};
int a[110], b[110], c[110];

int main(void)
{
	int n, m , x;

	cin >> n >> m >> x;

	for (int i = 1; i <= n; i++)
		cin >> a[i] >> b[i] >> c[i];

	for (int i = 1; i <= n; i++) {
		for (int j = m; j >= b[i]; j--) {
			for (int l = x; l >= c[i]; l--) {
				dp[j][l] = max(dp[j][l], dp[j - b[i]][l - c[i]] + a[i]);
			}
		}
	}
	cout << dp[m][x] << endl;
	return 0;
}

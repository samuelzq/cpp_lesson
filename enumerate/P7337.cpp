/**
 * https://www.luogu.com.cn/problem/P7337
 *
 * @File:   P7337.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2024-07-29
 *
 **/
#include <bits/stdc++.h>
using namespace std;

int t[110] = {0};
int q[110] = {0};

int main(void)
{
	int n, m, tt, k, ans;

	cin >> n >> m >> tt;

	for (int i = 0; i < n; i++)
		cin >> t[i];

	for (int i = 0; i < n; i++)
		cin >> q[i];

	k = 0;
	for (int i = 0; i < n; i++) {
		if (t[i] && q[i])  // 统计坐大巴且愿意打狼的人数
			k++;
	}

	ans = (k > m) ? (m + n - k) : n;
	cout << ans << endl;
	return 0;
}

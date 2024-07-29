/**
 * https://www.luogu.com.cn/problem/P5831
 *
 * @File:   P5831.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2024-07-29
 *
 **/
#include <bits/stdc++.h>
using namespace std;

int a[11][21];

int main(void)
{
	int k, n, ans;

	cin >> k >> n;
	for (int i = 0; i < k; i++) {
		for (int j = 0; j < n; j++) {
			int t;
			cin >> t;
			a[i][t - 1] = j;
		}
	}

	ans = 0;
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			int t = 0;
			for (int p = 0; p < k; p++) {
				if (a[p][i] < a[p][j])
					t++;
			}

			//cout << t << endl;
			if ((t == 0) || (t == k))
				ans++;
		}
	}
	cout << ans << endl;
	return 0;
}

/**
 * https://www.luogu.com.cn/problem/P2889
 *
 * @File:   P2889.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2024-11-04
 *
 **/
#include <bits/stdc++.h>
using namespace std;

struct cow {
	int l, r, e;

	cow() {l = r = e = 0;}

	cow(int _l, int _r, int _e) {
		l = _l, r = _r, e = _e;
	}
} cows[1003];
int dp[1000006] = {0};

bool cmp(cow &c1, cow &c2) {
	return c1.l < c2.l;
}

int main(void)
{
	int n, m, r, ans;

	cin >> n >> m >> r;
	for (int i = 0; i < m; i++) {
		int s, e, f;
		cin >> s >> e >> f;
		cows[i] = cow(s, e + r, f);
	}

	sort(cows, cows + m, cmp);

	ans = 0;
	for (int i = 0; i < m; i++) {
		for (int j = i - 1; j >= 0; j--) { // 依次遍历前面的时隙，如果可以挤奶则更新最优解
			if (cows[j].r <= cows[i].l)
				dp[i] = max(dp[i], dp[j]);
		}
		dp[i] += cows[i].e;
		ans = max(ans, dp[i]);
	}
	cout << ans << endl;
	return 0;
}

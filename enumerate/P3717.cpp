/**
 * https://www.luogu.com.cn/problem/P3717
 *
 * @File:   P3717.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2024-07-30
 *
 **/
#include <bits/stdc++.h>
using namespace std;

int a[110][110] = {{0}};  // 记录该点已经被探测到

int main(void)
{
	int n, m, r, ans;

	cin >> n >> m >> r;

	ans = 0;
	while (m--) { // 枚举每一个探测器
		int x, y;
		int lx, ly, rx, ry;
		cin >> x >> y;

		// 枚举半径r之内所有的点
		lx = max(1, x - r);
		ly = max(1, y - r);
		rx = min(n, x + r);
		ry = min(n, y + r);
		for (int i = lx; i <= rx; i++) {
			for (int j = ly; j <= ry; j++) {
				double d = sqrt((x - i) * (x - i) + (y - j) * (y - j));
				if (d <= 1.0 * r) {
					a[i][j] = 1;
				}
			}
		}
	}

	// 再次枚举，看看哪些点可以被探测到
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (a[i][j])
				ans++;
		}
	}
	cout << ans << endl;
	return 0;
}

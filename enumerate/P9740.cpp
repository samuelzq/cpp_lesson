/**
 * https://www.luogu.com.cn/problem/P9740
 *
 * @File:   P9740.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2024-07-31
 *
 **/
#include <bits/stdc++.h>
using namespace std;

struct au {
	int c;    // 测试点的数量
	int p;    // 通过的数量
} q[8];

int main(void)
{
	int n, cnt, au;

	cin >> n;
	cnt = 0;

	for (int i = 0; i < n; i++) {
		int c, p;
		cin >> c >> p;
		cnt += 100 / c * p;
		q[i].c = c;
		q[i].p = p;
	}

	cin >> au;

	if (cnt >= au) {
		cout << "Already Au." << endl;
	} else {
		int g = au - cnt;
		for (int i = 0; i < n; i++) {
			int c, p;
			c = q[i].c;
			p = q[i].p;

			if ((c - p) * 100 / c < g) {
				cout << "NaN" << endl;
			} else {
				// 枚举可能需要通过的case，输出最小的数值
				for (int j = 1; j <= c - p; j++) {
					if (j * 100 / c >= g) {
						cout << j << endl;
						break;
					}
				}
			}
		}
	}
	return 0;
}

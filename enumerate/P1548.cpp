/**
 * https://www.luogu.com.cn/problem/P1548
 *
 * @File:   P1548.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2024-07-29
 *
 **/
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int n, m, s, r;

	cin >> n >> m;

	s = r = 0;
	// 枚举正方形的数量，每种大小正方型可以通过乘法原理得出，
	// 注意循环中首先枚举的是最大的正方形的数量
	for (int i = 1; i <= min(n, m); i++)
		s += i * i;

	// 枚举横着的矩形
	for (int i = 2; i <= n;i++) {
		for (int j = 1; j < i; j++) {
			r += (n + 1 - i) * (m + 1 - j);
		}
	}

	// 枚举竖着的矩形
	for (int i = 2; i <= m;i++) {
		for (int j = 1; j < i; j++) {
			r += (m + 1 - i) * (n + 1 - j);
		}
	}

	cout << s << ' ' << r << endl;
	return 0;
}

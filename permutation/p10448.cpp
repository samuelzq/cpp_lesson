/**
 * https://www.luogu.com.cn/problem/P10448
 *
 * @File:   p10448.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2025-04-18
 *
 */
#include <bits/stdc++.h>

using namespace std;

void output(int x, int n)
{
	for (int i = n - 1; i >= 0; i--) {
		if (!(x & (1 << i)))
			cout << (n - i) << ' ';
	}
	cout << '\n';
}

int main(void)
{
	int n, m, x;

	cin >> n >> m;

	x = (1 << (n - m)) - 1;

	output(x, n);

	if (!x)
		return 0;
	int lowbit = x & -x;
	int left = x + lowbit;
	int right = ((x ^ left) / lowbit) >> 2;
	x = left | right;

	while (x < (1 << n)) {
		output(x, n);
		lowbit = x & -x;
		left = x + lowbit;
		right = ((x ^ left) / lowbit) >> 2;
		x = left | right;
	}
	return 0;
}

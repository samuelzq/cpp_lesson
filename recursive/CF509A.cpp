/**
 * https://www.luogu.com.cn/problem/CF509A
 *
 * @File:   CF509A.cpp
 * @Author: Lao Zhang <samuelzhang77@yahoo.com>
 * @Date:   2024-06-13
 *
 **/
#include <bits/stdc++.h>
using namespace std;

int a[12][12];

int main(void)
{
	int n, out;

	cin >> n;

	for (int i = 1; i <= n; i++)
		a[i][1] = a[1][i] = 1;
	out = 1;
	for (int i = 2; i <= n; i++) {
		for (int j = 2; j <= n; j++) {
			a[i][j] = a[i - 1][j] + a[i][j - 1];
			out = max(out, a[i][j]);
		}
	}
	cout << out << endl;
	return 0;
}

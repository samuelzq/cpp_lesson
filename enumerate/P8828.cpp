/**
 * https://www.luogu.com.cn/problem/P8828
 *
 * @File:   P8828.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2024-07-29
 *
 **/
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int c;

	cin >> c;
	for (int a = 1; a < c; a++) {
		for (int b = 1; b < c; b++) {
			if (a * a + b * b == c * c) {
				cout << a << ' ' << b << endl;
				return 0;
			}
		}
	}
	return 0;
}

/**
 * https://www.luogu.com.cn/problem/P8301
 *
 * @File:   P8301.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2024-07-31
 *
 **/
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int n, a, b;
	char c;

	cin >> n;
	a = b = 0;
	for (int i = 0; i < n; i++) {
		cin >> c;
		if (c == '1')
			a++;
	}
	for (int i = 0; i < n; i++) {
		cin >> c;
		if (c == '1')
			b++;
	}
	cout << abs(a - b) << endl;
	return 0;
}

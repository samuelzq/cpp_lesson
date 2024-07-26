/**
 * https://www.luogu.com.cn/problem/P1639
 *
 * @File:   P1639.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2024-07-25
 *
 **/
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int a, b, t, s, p;

	cin >> a >> b >> t >> s;

	if (a > b) {
		p = a;
		a = b;
		b = p;
	}

	if (t > s) {
		p = t;
		t = s;
		s = p;
	}

	cout << min(b - a, (abs(t - a) + abs(b - s))) << endl;
	return 0;
}

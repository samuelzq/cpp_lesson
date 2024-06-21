/**
 * https://www.luogu.com.cn/problem/P2626
 *
 * @File:   P2626.cpp
 * @Author: Lao Zhang <samuelzhang77@yahoo.com>
 * @Date:   2024-06-21
 *
 **/
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	long long int f, f1, f2, n;

	cin >> n;
	f = f1 = f2 = 1;

	if (n <= 2) {
		cout << 1 << endl;
		return 0;
	}

	for (int i = 3; i <= n; i++) {
		f = (f1 + f2) % (1 << 31);
		f1 = f2;
		f2 = f;
	}

	cout << f << '=';
	for (int d = 2; d * d <= f; d++) {
		while (f % d == 0) {
			cout << d;
			f /= d;
			if (f > 1)
				cout << '*';
		}
	}
	if (f > 1)
		cout << f;
	cout << endl;
	return 0;
}

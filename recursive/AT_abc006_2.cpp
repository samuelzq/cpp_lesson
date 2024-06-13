/**
 * https://www.luogu.com.cn/problem/AT_abc006_2
 *
 * @File:   AT_abc006_2.cpp
 * @Author: Lao Zhang <samuelzhang77@yahoo.com>
 * @Date:   2024-06-13
 *
 **/
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	long long int n, f1, f2, f3, f;

	cin >> n;
	f1 = f2 = 0;
	f3 = 1;

	if (n < 3) {
		cout << 0 << endl;
	} else if (n == 3) {
		cout << 1 << endl;
	} else {
		for (int i = 4; i <= n; i++) {
			f = ((f1 + f2) % 10007 + f3) % 10007;
			f1 = f2;
			f2 = f3;
			f3 = f;
		}
		cout << f << endl;
	}
	return 0;
}

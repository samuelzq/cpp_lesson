/**
 * https://www.luogu.com.cn/problem/P8225
 *
 * @File:   P8225.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2024-08-07
 *
 **/
#include <bits/stdc++.h>
using namespace std;

long long l[] = {0, 9, 99, 999, 9999, 99999, 999999, 9999999, 99999999, 999999999, 9999999999};

int main(void)
{
	int t;

	cin >> t;
	while (t--) {
		long long k, n;
		cin >> k >> n;

		if (n % l[k] == 0)
			cout << "aya\n";
		else
			cout << "baka\n";
	}
	cout << endl;
	return 0;
}

/**
 * https://www.luogu.com.cn/problem/P9710
 *
 * @File:   P9710.cpp
 * @Author: Lao Zhang <samuelzhang77@yahoo.com>
 * @Date:   2024-06-17
 *
 **/
#include <bits/stdc++.h>
using namespace std;

const long long M = 1e9+7;

int main(void)
{
	long long int n, cnt = 0, l;

	cin >> n;

	l = 0;
	for (int i = 1; i <= n; i++) {
		int t;
		cin >> t;
		l = (t == 5) ? l+1 : 0;

		cnt = ((cnt + (l * (l + 1)) / 2 % M) % M + l * (i - l) % M) % M;
	}

	cout << cnt << endl;
	return 0;
}

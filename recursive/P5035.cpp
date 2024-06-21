/**
 * https://www.luogu.com.cn/problem/P5035
 *
 * @File:   P5035.cpp
 * @Author: Lao Zhang <samuelzhang77@yahoo.com>
 * @Date:   2024-06-17
 *
 **/
#include <bits/stdc++.h>
using namespace std;

int power2(long long k)
{
	long long r = 1, b = 2;
	while (k) {
		if (k & 1)
			r = r * b % 123456789;
		b = b * b % 123456789;
		k >>= 1;
	}
	return r;
}

int main(void)
{
	long long k;

	cin >> k;
	cout << power2(k - 1) << endl;
	return 0;
}

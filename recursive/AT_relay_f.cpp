/**
 * https://www.luogu.com.cn/problem/AT_relay_f
 *
 * @File:   AT_relay_f.cpp
 * @Author: Lao Zhang <samuelzhang77@yahoo.com>
 * @Date:   2024-06-12
 *
 **/
#include <bits/stdc++.h>
using namespace std;

long long int f[50];

int main(void)
{
	long long int x;

	cin >> x;

	f[0] = 2;

	for (int i = 1; i <= x; i++)
		f[i] = 2 * f[i - 1] + 2;

	cout << f[x];
	return 0;
}

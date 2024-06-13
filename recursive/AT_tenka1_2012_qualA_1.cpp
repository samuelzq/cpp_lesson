/**
 * https://www.luogu.com.cn/problem/AT_tenka1_2012_qualA_1
 *
 * @File:   AT_tenka1_2012_qualA_1.cpp
 * @Author: Lao Zhang <samuelzhang77@yahoo.com>
 * @Date:   2024-06-13
 *
 **/
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	long long int n, f1, f2, f;

	cin >> n;
	f = f1 = f2 = 1;

	for (int i = 2; i <= n; i++) {
		f = f1 + f2;
		f1 = f2;
		f2 = f;
	}
	cout << f << endl;
	return 0;
}

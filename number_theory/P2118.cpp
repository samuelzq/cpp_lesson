/**
 * https://www.luogu.com.cn/problem/P2118
 *
 * @File:   P2118.cpp
 * @Author: Lao Zhang <samuelzhang77@yahoo.com>
 * @Date:   2024-06-12
 *
 **/
#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
	return b ? gcd(b, a % b) : a;
}

int main(void)
{
	int a, b, l;
	int mina, minb;

	cin >> a >> b >> l;

	minb = 1;
	mina = l;
	for (int i = 1; i <= l; i++) {
		for (int j = 1; j <= l; j++) {
			if (gcd(j, i) == 1 && (i * b >= a * j) && (i * minb < j * mina)) {
				mina = i;
				minb = j;
			}
		}
	}
	cout << mina << ' ' << minb << endl;
	return 0;
}

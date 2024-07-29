/**
 * https://www.luogu.com.cn/problem/B3612
 *
 * @File:   B3612.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2024-08-01
 *
 **/
#include <bits/stdc++.h>
using namespace std;

int a[100005] = {0};
int b[100005] = {0};


int main(void)
{
	int n, m;

	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		b[i] = b[i - 1] + a[i];
	}

	cin >> m;
	for (int i = 0; i < m; i++) {
		int l, r;
		cin >> l >> r;
		cout << b[r] - b[l - 1] << endl;
	}
	return 0;
}

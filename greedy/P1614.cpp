/**
 * https://www.luogu.com.cn/problem/P1614
 *
 * @File:   P7314.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2024-07-24
 *
 **/
#include <bits/stdc++.h>
using namespace std;

#define N 3003
int a[N] = {0};
int b[N] = {0};

int main(void)
{
	int n, m, out;

	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		b[i] = b[i - 1] + a[i];
	}

	// 利用前缀和求出连续m个数之和中最小的
	out = b[n];
	for (int i = m; i <= n; i++) {
		out = min(out, b[i] - b[i - m]);
	}

	cout << out << endl;
	return 0;
}


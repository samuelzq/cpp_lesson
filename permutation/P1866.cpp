/**
 * https://www.luogu.com.cn/problem/P1866
 *
 * @File:   P1866.cpp
 * @Author: Lao Zhang <samuelzhang77@yahoo.com>
 * @Date:   2024-06-17
 *
 **/
#include <bits/stdc++.h>
using namespace std;

#define N 55
#define M 1000000007

int m[N] = {0};

int main(void)
{
	long long int n, cnt;

	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> m[i];

	// 将需求排序，这样前面的选择不会使得后续无法选择
	sort(m, m + n);

	cnt = m[0];
	for (int i = 1; i < n; i ++) {
		m[i] -= i;
		cnt = cnt * m[i] % M;
	}
	cout << cnt << endl;
	return 0;
}

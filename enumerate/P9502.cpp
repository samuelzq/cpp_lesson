/**
 * https://www.luogu.com.cn/problem/P9502
 *
 * @File:   P9502.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2024-07-30
 *
 **/
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int n, m, t;

	cin >> n;

	m = 0;
	t = 1;
	while (t < n) { // 枚举遍历每一种可能的m
		m += 2;
		t = t * 2 * 2;
	}
	cout << m - 2 << endl;
	return 0;
}

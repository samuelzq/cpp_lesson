/**
 * https://www.luogu.com.cn/problem/P8318
 *
 * @File:   P8318.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2024-07-29
 *
 **/
#include <bits/stdc++.h>
using namespace std;

struct op {
	int o, x, y;
} ops[210];
long long a[1003];

int main(void)
{
	int n, m;

	cin >> n >> m;

	for (int i = 1; i <= n; i++)
		cin >> a[i];

	for (int i = 0; i < m; i++) {
		cin >> ops[i].o >> ops[i].x >> ops[i].y;
	}

	// 原始数据是输入的逆运算
	for (int i = m - 1; i >= 0; i--) {
		int x = ops[i].x;
		int y = ops[i].y;
		if (ops[i].o == 2) {  // 结果是乘积，原始值需要除法运算
			if (x != y)
				a[x] = a[x] / a[y];
			else
				a[x] = sqrt(a[x]);
		} else if (ops[i].o == 1) {
			if (x != y)
				a[x] = a[x] - a[y];
			else
				a[x] = a[x] / 2;
		}
	}

	for (int i = 1; i < n; i++)
		cout << a[i] << ' ';
	cout << a[n] << endl;
	return  0;
}

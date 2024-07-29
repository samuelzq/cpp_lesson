/**
 * https://www.luogu.com.cn/problem/U69096
 *
 * @File:   U69096.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2024-08-01
 *
 **/
#include <bits/stdc++.h>
using namespace std;

int a[110] = {0};
int b[110] = {0};

int main(void)
{
	int n;

	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> b[i];
		a[i] = b[i] - b[i - 1];
	}

	for (int i = 1; i < n; i++)
		cout << a[i] << ' ';
	cout << a[n] << endl;

	return 0;
}

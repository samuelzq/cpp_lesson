/**
 * https://www.luogu.com.cn/problem/P1403
 *
 * @File:   P1403.cpp
 * @Author: Lao Zhang <samuelzhang77@yahoo.com>
 * @Date:   2024-06-12
 *
 **/
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int n, cnt;

	cin >> n;

	cnt = 0;
	for (int d = 1; d <= n; d++) {
		cnt += n / d;
	}
	cout << cnt << endl;
	return 0;
}

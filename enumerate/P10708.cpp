/**
 * https://www.luogu.com.cn/problem/P10708
 *
 * @File:   P10708.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2024-07-29
 *
 **/
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	long long int n, x, y, ans;

	cin >> n >> x >> y;

	ans = 0;
	for (int i = 0; i < n; i++) {
		long long int a, t;
		cin >> a;
		t = x * a;
		ans += (t > y) ? y : t;
	}
	cout << ans << endl;
	return 0;
}

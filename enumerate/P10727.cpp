/**
 * https://www.luogu.com.cn/problem/P10727
 *
 * @File:   P10727.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2024-07-29
 *
 **/
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int n, ans;

	cin >> n;
	ans = 0;
	while (n--) {
		int a, b;
		cin >> a >> b;
		ans = max(ans, a * b);
	}
	cout << ans << endl;
	return 0;
}

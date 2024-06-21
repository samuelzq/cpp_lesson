/**
 * https://www.luogu.com.cn/problem/P2837
 *
 * @File:   P2837.cpp
 * @Author: Lao Zhang <samuelzhang77@yahoo.com>
 * @Date:   2024-06-21
 *
 **/
#include <bits/stdc++.h>
using namespace std;

int a[30003];

int main(void)
{
	int n, cnt, s;

	cin >> n;
	cnt = 0;

	// 首先假设将所有牌子都改成2
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if (a[i] == 1)
			cnt++;
	}
	s = cnt;

	// 然后找最佳分割点，前面全是1，后面全是2
	for (int i = 0; i < n; i++) {
		if (a[i] == 2)
			cnt++;
		else
			cnt--;
		s = min(s, cnt);
	}
	cout << s << endl;
	return 0;
}

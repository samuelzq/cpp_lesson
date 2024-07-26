/**
 * https://www.luogu.com.cn/problem/P6832
 *
 * @File:   P6832.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2024-07-26
 *
 **/
#include <bits/stdc++.h>
using namespace std;

int a[26]= {0};

int main(void)
{
	char c;
	int ans = 0;

	while (cin >> c)
		a[c - 'a']++;

	for (int i = 0; i < 26; i++)
		ans = max(ans, a[i]);
	cout << ans << endl;
	return 0;
}

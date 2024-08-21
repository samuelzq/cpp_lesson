/**
 * https://www.luogu.com.cn/problem/P7772
 *
 * @File:   P7772.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2024-07-29
 *
 **/
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int a, i;
	int ans;

	cin >> a >> i;
	ans = a * i;
	while ((ans + a - 1) / a >= i)
		ans--;

	cout << ans + 1 << endl;
	return 0;
}

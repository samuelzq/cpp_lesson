/**
 * https://www.luogu.com.cn/problem/P7314
 *
 * @File:   P7314.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2024-07-24
 *
 **/
#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 4;
int a[N] = {0};

// 本题使用贪心解法。区间长度只可能是2。因为区间长度超过2
// 最大值可能变大，最小值可能变得更小。
int main(void)
{
	int o = 0;
	int n;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		o = (a[i] > o) ? a[i] : o;
	}

	for (int i = 0; i < n - 1; i++)
		o = min(o, max(a[i], a[i + 1]) - min(a[i], a[i + 1]));

	cout << o << endl;
	return 0;
}

/**
 * https://www.luogu.com.cn/problem/P2759
 *
 * @File:   P2759.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2024-08-21
 *
 **/
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int n;
	int l, r;

	// 注意左右边界的取值
	l = 1;
	r = 1000000000;
	cin >> n;
	while (l < r) {
		int mid = l + (r - l) / 2;

		if (n > mid * log10(1.0 * mid) + 1) // 注意：10进制数位长的求法
			l = mid + 1;
		else
			r = mid;
	}
	cout << l << endl;
	return 0;
}

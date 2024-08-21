/**
 * https://www.luogu.com.cn/problem/P1577
 *
 * @File:   P1577.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2024-08-21
 *
 **/
#include <bits/stdc++.h>
using namespace std;

int w[10005] = {0};
int n, k;

int check(int l)
{
	int c = 0;
	for (int i = 0; i < n; i++) {
		c += floor(w[i] / l);
	}
//cout << c << endl;
	return c;
}

int main(void)
{
	int l, r, mid, c;
	cin >> n >> k;

	l = r = 0;
	for (int i = 0; i < n; i++) {
		double a;
		cin >> a;
		w[i] = 100 * a;
		r = max(r, w[i]);
	}

	r=1e9+1;

	while (l + 1 < r) { // 查找有边界的另一种写法，否则有两个case无法通过
		mid = l + (r - l) / 2;
		c = check(mid);  // 计算当前长度可以裁剪的绳子的数量
		if (c >= k)          // 查找右边界
			l = mid;
		else
			r = mid;
	}
	cout << fixed << setprecision(2) << 1.0 * l / 100 << endl;
//	printf("%.2f\n", l / 100.0);
	return 0;
}

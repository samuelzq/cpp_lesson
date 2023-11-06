/**
 * https://www.luogu.com.cn/problem/P5719
 *
 * @File:   p5719.cpp
 * @Author: Lao Zhang <samuelzhang77@yahoo.com>
 * @Date:   2023-09-26
 *
 **/
#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	int n, k, aa, bb;
	double a, b;

	scanf("%d %d", &n, &k);
	a = b = 0;
	aa = bb = 0;
	for (int i = 1; i <= n; i++) {
		if (i % k) {
			aa++;
			a += i;
		} else {
			bb++;
			b += i;
		}
	}
	printf("%.01lf %.01lf\n", b / bb, a / aa);
	return 0;
}

/**
 * https://www.luogu.com.cn/problem/B2065
 *
 * @File:   B2065.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-10-26
 *
 */
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int n;
	int a, b;
	double x, y;

	cin >> n;
	cin >> a >> b;

	x = b * 1.0 / a; // 计算鸡尾酒疗法的疗效
	while (--n) {
		cin >> a >> b;
		y = b * 1.0 / a; // 计算新疗法的疗效

		if (y - x > 0.05)
			cout << "better" << endl;
		else if (x - y > 0.05)
			cout << "worse" << endl;
		else
			cout << "same" << endl;
	}
	return 0;
}

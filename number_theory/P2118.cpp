/**
 * https://www.luogu.com.cn/problem/P2118
 *
 * @File:   P2118.cpp
 * @Author: Lao Zhang <samuelzhang77@yahoo.com>
 * @Date:   2024-06-12
 *
 **/
#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
	return b ? gcd(b, a % b) : a;
}

int main(void)
{
	int a, b, l;
	int mina, minb;

	cin >> a >> b >> l;

	minb = 1;
	mina = l;
	// 由于l的值比较小因此可以枚举A‘和B’所有可能的值。
	for (int i = 1; i <= l; i++) {
		for (int j = 1; j <= l; j++) {
			// 这两个值的取值需要满足两个条件：1、gcd(A’, B’) == 1；2、A’*B >= A*B’。
			// 由于可能存在多种满足这两个条件的A’和B’，在所有组合中还需要找到A’/B‘最小的一种组合。
			if (gcd(j, i) == 1 && (i * b >= a * j) && (i * minb < j * mina)) {
				mina = i;
				minb = j;
			}
		}
	}
	cout << mina << ' ' << minb << endl;
	return 0;
}

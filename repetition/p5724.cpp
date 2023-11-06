/**
 * https://www.luogu.com.cn/problem/P5724
 *
 * @File:   p5724.cpp
 * @Author: Lao Zhang <samuelzhang77@yahoo.com>
 * @Date:   2023-09-26
 *
 **/
#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	int maxa, mina, n;

	maxa = 0;
	mina = 99999;

	scanf("%d", &n);
	while (n--) {
		int a;
		scanf("%d", &a);
		maxa = max(maxa, a);
		mina = min(mina, a);
	}
	printf("%d\n", maxa - mina);
	return 0;
}

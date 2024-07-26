/**
 * https://www.luogu.com.cn/problem/P7285
 *
 * @File:   P7285.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2024-07-26
 *
 **/
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int t;

	scanf("%d", &t);
	while (t--) {
		int n, c;
		scanf("%d", &n);

		// 差值其实就是原先队列中的1的总数
		c= 0;
		for (int i = 0; i < n; i++) {
			int s;
			scanf("%d", &s);
			if (s == 1)
				c++;
		}
		printf("%d\n", c);
		for (int i = 0; i < n - 1; i++)
			printf("1 ");
		printf("1\n");
	}
	return 0;
}

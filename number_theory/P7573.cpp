/**
 * https://www.luogu.com.cn/problem/P7573
 *
 * @File:   P7573.cpp
 * @Author: Lao Zhang <samuelzhang77@yahoo.com>
 * @Date:   2024-06-12
 *
 **/
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int t;

	scanf("%d", &t);
	while (t--) {
		int n;

		scanf("%d", &n);

		if (n == 1)
			printf("0\n");
		else
			printf("%d\n", (n + 1) >> 1);
	}
	return 0;
}

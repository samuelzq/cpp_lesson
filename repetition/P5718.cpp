/**
 * https://www.luogu.com.cn/problem/P5718
 *
 * @File:   P5718.cpp
 * @Author: Lao Zhang <samuelzhang77@yahoo.com>
 * @Date:   2023-09-25
 *
 **/
#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	int n, out;

	scanf("%d %d", &n, &out);

	while (n-- > 1) {
		int t;
		scanf("%d", &t);
		if (t < out)
			out = t;
	}
	printf("%d\n", out);
	return 0;
}

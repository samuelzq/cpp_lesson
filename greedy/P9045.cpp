/**
 * https://www.luogu.com.cn/problem/P9045
 *
 * @File:   P9045.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2024-07-24
 *
 **/
#include <bits/stdc++.h>
using namespace std;

const int N = 5e5 + 5;
int b[N] = {0};

int main(void)
{
	int n, k, d, a;
	long long ans = 0;

	scanf("%d %d", &n, &k);

	d = 0;
	for (int i = 0; i < n; i++) {
		scanf("%d", &a);
		if (b[a] == 0) {  // 当前数字第一次出现，在前方队列里面查找它应该出现的位置
			b[a] = 1;
			ans += i - d; // 交换的次数是前移的位数，第i个数向前移动到第d位
			d++;
		}
		if (d == k) {
			printf("%lld\n", ans);
			return 0;
		}
	}

	printf("-1\n");
	return 0;
}

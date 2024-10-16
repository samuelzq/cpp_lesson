/**
 * https://www.luogu.com.cn/problem/P1571
 *
 * @File:   P1571.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2024-08-07
 *
 **/
#include <bits/stdc++.h>
using namespace std;

#define N 100100
#define LL long long
LL a[N] = {0};
LL b[N] = {0};
int n, m;

bool binary_search(LL a[], LL key)
{
	int l, r;
	l = 1;
	r = m;

	while (l <= r) {
		int mid = l + (r - l) / 2;
		if (key == a[mid])
			return true;
		else if (key > a[mid])
			l = mid + 1;
		else
			r = mid - 1;
	}
	return false;
}

int main(void)
{
	scanf("%d %d", &n, &m);

	for (int i = 1; i <= n; i++)
		scanf("%lld", &a[i]);
	for (int i = 1; i <= m; i++)
		scanf("%lld", &b[i]);
	sort(b + 1, b + m + 1);

	// 为保证按在科技创新奖获奖名单中的先后次序输出
	// 检测a中的成员是否在b中出现
	for (int i = 1; i <= n; i++) {
		if (binary_search(b, a[i]))
			printf("%lld ", a[i]);
	}
	printf("\n");
	return 0;
}

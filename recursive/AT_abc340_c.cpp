/**
 * https://www.luogu.com.cn/problem/AT_abc340_c
 *
 * @File:   AT_abc340_c.cpp
 * @Author: Lao Zhang <samuelzhang77@yahoo.com>
 * @Date:   2024-06-17
 *
 **/
#include <bits/stdc++.h>
using namespace std;

#define ULL unsigned long long

int main(void)
{
	ULL n, t, k;
	int i;

	cin >> n;
	t = n;
	i = 0;
	k = 1;

	// 统计n可以连续除以几次2
	while (t > 1) {
		t /= 2;
		i++;
		k *= 2;
	}

	cout << n * i + 2 * (n % k) << endl;
	return 0;
}

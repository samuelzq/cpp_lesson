/**
 * https://www.luogu.com.cn/problem/P9044
 *
 * @File:   P9044.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2024-07-25
 *
 **/
#include <bits/stdc++.h>
using namespace std;

int a[200] = {0};  // 统计每个分数出现的次数

int main(void)
{
	int n, k, ans, mm;

	cin >> n >> k;

	mm = 0;
	for (int i = 0; i < n; i++) {
		int t;
		cin >> t;
		a[t]++;  // 统计分数t出现的次数
		mm = (mm < t) ? t : mm;
	}

	ans = 0;
	while (mm) { // 从最高分开始发奖，
		ans += a[mm--];
		if (ans >= k) // 直到奖品发完
			break;
	}
	cout << ans << endl;
	return 0;
}

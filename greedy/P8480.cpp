/**
 * https://www.luogu.com.cn/problem/P8480
 *
 * @File:   P8480.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2024-07-26
 *
 **/
#include <bits/stdc++.h>
using namespace std;

#define N 1000006
long long int a[N] = {0};

int main(void)
{
	int n, m;
	long long minn, maxn;

	cin >> n >> m;
	maxn = 0;
	minn = 999999999;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		maxn = max(maxn, a[i]);
		minn = min(minn, a[i]);
	}

	// 对最大的数操作m次，令其增大
	for (int i = 0; i < m; i++) {
		if (maxn < 2)
			maxn += 2;
		else
			maxn *= 2;
	}

	cout << maxn - minn << endl;
	return 0;
}

/**
 * https://www.luogu.com.cn/problem/CF103A
 *
 * @File:   CF103A.cpp
 * @Author: Lao Zhang <samuelzhang77@yahoo.com>
 * @Date:   2024-06-12
 *
 **/
#include <bits/stdc++.h>
using namespace std;

#define ULL unsigned long long
ULL a[110];

int main(void)
{
	int n;
	ULL f;

	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> a[i];

	f = 0;
	for (int i = 1; i <= n; i++)
		f += i * (a[i] - 1);
	f += n;

	cout << f << endl;
	return 0;
}

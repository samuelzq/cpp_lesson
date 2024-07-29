/**
 * https://www.luogu.com.cn/problem/P4702
 *
 * @File:   P4702.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2024-08-01
 *
 **/
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	long long int n, cnt;

	cin >> n;
	cnt = 0;
	while (n--) {
		long long t;
		cin >> t;
		cnt += t;
	}
	if (cnt & 1)
		cout << "Alice" << endl;
	else
		cout << "Bob" << endl;
	return 0;
}

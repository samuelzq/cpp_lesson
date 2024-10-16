/**
 * https://www.luogu.com.cn/problem/P3613
 *
 * @File:   P3613.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-09-28
 *
 */
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int n, q;
	vector< vector<int> > locker;

	cin >> n >> q;
	if (locker.size() < n)
		locker.resize(n + 1);

	while (q--) {
		int o, i, j, k;
		cin >> o;

		if (o == 1) {
			// 存储输入的数据
			cin >> i >> j >> k;
			if (locker[i].size() < j)
				locker[i].resize(j + 1);
			locker[i][j] = k;
		} else { // 输出已经存储的数据
			cin >> i >> j;
			cout << locker[i][j] << endl;
		}
	}
	return 0;
}

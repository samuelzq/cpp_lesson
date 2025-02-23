/**
 * https://www.luogu.com.cn/problem/P4305
 *
 * @File:   P4035.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-12-15
 *
 */
#include <bits/stdc++.h>
using namespace std;

// 记录输入是否已经出现过
map<int, int> b;

int main(void)
{
	int t;

	scanf("%d", &t);
	while (t--) {
		int n;
		cin >> n;
		b.clear();
		for (int i = 0; i < n; i++) {
			int m;
			scanf("%d", &m);
			if (b.find(m) == b.end()) {
				printf("%d ", m);
				b[m] = m;
			}
		}
		printf("\n");
	}
	return 0;
}

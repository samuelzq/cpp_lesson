/**
 * https://www.luogu.com.cn/problem/P2058
 *
 * @File:   P2058.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-10-01
 *
 */
#include <bits/stdc++.h>
using namespace std;

struct peaple {
	int time;
	int nation;
};

deque<peaple> ships;  // 队列存储到岸的人而不是船，否则MLE
int st[100005] = {0};

#define D 86400

int main(void)
{
	int n, maxk, cnt;

	cin >> n;

	cnt = maxk = 0;
	for (int i = 0; i < n; i++) {
		int t, k;
		peaple p;
		cin >> t >> k;

		while (!ships.empty()) { // 清理队列中到岸超过24小时的乘客
			p = ships.front();

			if (t - p.time < D)
				break;
			st[p.nation]--;
			if (st[p.nation] == 0)   // 某个国家的人数被清零，国家数目减一
				cnt--;
			ships.pop_front();
		}

		for (int j = 1; j <= k; j++) {
			int nn;

			cin >> nn;
			maxk = max(nn, maxk);
			p.time = t;
			p.nation = nn;
			ships.push_back(p);
			st[nn] += 1;
			if (st[nn] == 1)   // 某国第一次出现，这里可以避免后续循环查询所有可能的国家是否有乘客到岸
				cnt++;
		}

		cout << cnt << endl;
	}
	return 0;
}

/**
 * https://www.luogu.com.cn/problem/P1996
 *
 * @File:   P1996.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-09-28
 *
 */
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int n, m, t;
	queue<int> q1, q2;

	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		q1.push(i);

	t = 1;
	while (!q1.empty()) {
		int k = q1.front();
		q1.pop();
		if (t == m) { // 出队的同学加入第二个队列
			q2.push(k);
			t = 1;
		} else { // 其余同学排在队尾
			t++;
			q1.push(k);
		}
	}

	for (; !q2.empty(); q2.pop())
		cout << q2.front() << ' ';
	cout << endl;
	return 0;
}

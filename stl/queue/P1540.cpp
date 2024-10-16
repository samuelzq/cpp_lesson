/**
 * https://www.luogu.com.cn/problem/P1540
 *
 * @File:   P1540.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-10-01
 *
 */
#include <bits/stdc++.h>
using namespace std;

deque<int> mem;   // 模拟内存
int s[1003] = {0};  // 记录当前单词是否已经保存在内存中

int main(void)
{
	int m, n, cnt;

	cin >> m >> n;
	cnt = 0;

	for (int i = 0; i < n; i++) {
		int q;
		cin >> q;

		if (s[q])  // 内存中包含当前单词，不需要查询
			continue;

		if (mem.size() == m) { // 内存已满，将较早存入的单词清除
			int t = mem.front();
			s[t] = 0;
			mem.pop_front();
		}

		s[q] = 1;  // 记录当前的查询
		mem.push_back(q);
		cnt++;
	}
	cout << cnt << endl;
	return 0;
}

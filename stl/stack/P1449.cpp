/**
 * https://www.luogu.com.cn/problem/P1449
 *
 * @File:   P1449.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-09-28
 *
 */
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	stack<int> s1, s2;
	string s;
	int t = 0;

	cin >> s;
	for (char c: s) {
		int a, b;
		if (c == '.') {
			s1.push(t); // 将数据暂时压入堆栈
			t = 0;
		} else if (c >= '0' && c <= '9') {
			t = t * 10 + c - '0';  // 拼数
		} else if (c == '@') {
			break;
		} else {
			// 根据不同的运算符进行运算
			a = s1.top();
			s1.pop();
			b = s1.top();
			s1.pop();
			//cout << b << c << a << endl;
			// 缓存中间计算结果
			if (c == '*')
				s1.push(a * b);
			else if (c == '+')
				s1.push(a + b);
			else if (c == '-')
				s1.push(b - a);
			else
				s1.push(b / a);
		}
	}
	cout << s1.top() << endl;
	return 0;
}

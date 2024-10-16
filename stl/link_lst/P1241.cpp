/**
 * https://www.luogu.com.cn/problem/P1241
 *
 * @File:   P1241.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-10-02
 *
 */
#include <bits/stdc++.h>
using namespace std;

struct brace {
	int idx;
	char c;

	brace (int _idx, char _c) {
		idx = _idx;
		c = _c;
	}
};
bool match[110] = {0};  // 记录所有括号的匹配状态

int main(void)
{
	string s;
	stack<brace> l;  // 堆栈中记录所有未匹配的左括号

	cin >> s;

	for (int i = 0; i < s.length(); i++) {
		char c = s[i];
		brace b(i, c);

		if (c == '[' || c == '(') { // 左括号入栈
			l.push(b);
			continue;
		}

		if (!l.empty()) { // 将每个右括号和栈顶的左括号比对
			brace t = l.top();
			if (c == ')' && t.c == '(')  // 如果匹配则修改匹配状态
				match[t.idx] = match[i] = true;
			else if (c == ']' && t.c == '[')
				match[t.idx] = match[i] = true;
			else
				match[i] = false;
			if (match[i])
				l.pop();
		}
	}

	for (int i = 0; i < s.length(); i++) {
		if (match[i]) {  // 如果该符合有匹配的符号，就直接输出
			cout << s[i];
		} else { // 否则输出补全的括号
			if (s[i] == '[' || s[i] == ']')
				cout << "[]";
			else if (s[i] == '(' || s[i] == ')')
				cout << "()";
		}
	}
	cout << endl;
	return 0;
}

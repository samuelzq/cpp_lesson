/**
 * https://www.luogu.com.cn/problem/P4387
 *
 * @File:   P4387.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-10-02
 *
 */
#include <bits/stdc++.h>
using namespace std;

int p1[100005];
int p2[100005];
stack<int> s;

int main(void)
{
	int q;

	cin >> q;
	while (q--) {
		int n;
		int idx = 0;

		while (!s.empty())
			s.pop();

		cin >> n;
		for (int i = 0; i < n; i++)
			cin >> p1[i];

		for (int i = 0; i < n; i++)
			cin >> p2[i];


		for (int i = 0; i < n; i++) {
			s.push(p1[i]);
			while (!s.empty() && s.top() == p2[idx]) {
				s.pop();
				idx++;
			}
		}

		if (!s.empty())
			cout << "No\n";
		else
			cout << "Yes\n";
	}
	cout << endl;
	return 0;
}

/**
 * https://www.luogu.com.cn/problem/P3879
 *
 * @File:   P3879.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-12-15
 *
 */
#include <bits/stdc++.h>
using namespace std;

unordered_set<string> ss[1010];

int main(void)
{
	int n;

	cin >> n;
	for (int i = 0; i < n; i++) {
		string str;
		int l;
		cin >> l;
		ss[i].clear();
		for (int j = 0; j < l; j++) {
			cin >> str;
			ss[i].insert(str);
		}
	}

	int m;
	cin >> m;
	for (int i = 0; i < m; i++) {
		string str;
		cin >> str;
		for (int i = 0; i < n; i++) {
			if (ss[i].find(str) != ss[i].end())
				cout << i + 1 << ' ';
		}
		cout << '\n';
	}
	cout << endl;
	return 0;
}

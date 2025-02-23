/**
 * https://www.luogu.com.cn/problem/P5266
 *
 * @File:   P5266.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-12-08
 *
 */
#include <bits/stdc++.h>
using namespace std;

map<string, int> stu;

int main(void)
{
	int n;
	map<string, int>::iterator it;

	cin >> n;
	while (n--) {
		int ops, sc;
		string name;

		cin >> ops;
		switch (ops) {
		case 1:
			cin >> name >> sc;
			stu[name] = sc;
			cout << "OK\n";
			break;
		case 2:
			cin >> name;
			it = stu.find(name);
			if (it != stu.end())
				cout << it->second << '\n';
			else
				cout << "Not found\n";
			break;
		case 3:
			cin >> name;
			it = stu.find(name);
			if (it != stu.end()) {
				cout << "Deleted successfully\n";
				stu.erase(it);
			}
			else
				cout << "Not found\n";
			break;
		case 4:
			cout << stu.size() << '\n';
		}
	}
	cout << endl;
	return 0;
}

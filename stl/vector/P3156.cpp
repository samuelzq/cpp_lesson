/**
 *
 * @File:   P3156.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-09-28
 *
 */
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	vector<int> stu;
	int n, m;

	cin >> n >> m;
	while (n--) {
		int ss;
		cin >> ss;
		stu.push_back(ss);
	}

	while (m--) {
		int idx;
		cin >> idx;
		cout << stu[idx - 1] << endl;
	}
	return 0;
}

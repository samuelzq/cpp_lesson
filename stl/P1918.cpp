/**
 * https://www.luogu.com.cn/problem/P1918
 *
 * @File:   P1918.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-12-08
 *
 */
#include <bits/stdc++.h>
using namespace std;

map<int, int> polling;

int main(void)
{
	int n;

	cin >> n;
	for (int i = 1; i <= n; i++) {
		int a;
		cin >> a;
		polling[a] = i;
	}

	cin >> n;
	while (n--) {
		int m;
		cin >> m;
		map<int, int>::iterator it = polling.find(m);
		if (it == polling.end())
			cout << 0 << '\n';
		else
			cout << polling[m] << '\n';
	}
	cout << endl;
	return 0;
}

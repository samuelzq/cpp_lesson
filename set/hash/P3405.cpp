/**
 *
 * @File:   P3405.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-12-01
 *
 */
#include <bits/stdc++.h>
using namespace std;

const int mod = 100007;
vector<array<int, 2>> harsh[mod + 2];

void insert(int x)
{
	auto h = harsh[x % mod];

	for (int i = 0; i < harsh[x % mod].size(); i++) {
		if (harsh[x % mod][i][0] == x) {
			harsh[x% mod][i][1]++;
			return;
		}
	}
	harsh[x % mod].push_back({x, 1});
	return;
}

int get_harsh(string a, string b)
{
	return (a[0] - 'A') + (a[1] - 'A') * 26 + (b[0] - 'A') * 26 * 26 + (b[1] - 'A') * 26 * 26 * 26;
}

int find(int x)
{
	auto h = harsh[x % mod];

	for (auto arr : h) {
		if (arr[0] == x) {
	//		cout << "find one\n";
			return arr[1];
		}
	}
	return 0;
}

int main(void)
{
	int n, cnt;

	cnt = 0;
	cin >> n;
	while (n--) {
		string str1, str2;
		cin >> str1 >> str2;
		if (str1[0] != str2[0] || str1[1] != str2[1])
			cnt += find(get_harsh(str2, str1));
		insert(get_harsh(str1, str2));
	}
	cout << cnt << endl;
	return 0;
}

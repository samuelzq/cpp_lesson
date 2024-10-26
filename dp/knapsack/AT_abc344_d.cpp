/**
 * https://www.luogu.com.cn/problem/AT_abc344_d
 *
 * @File:   AT_abc344_d.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2024-10-21
 *
 **/
#include <bits/stdc++.h>
using namespace std;

int dp[120] = {0};
vector<string> str[100];
string t;

// 检测字符串s是否和当前字符串尾部一致
bool check(int tail, string &s)
{
	int l = s.length();

	while (l--) {
		if (s[l] != t[tail--])
			return false;
	}
	return true;
}


int main(void)
{
	int n;

	cin >> t >> n;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		for (int j = 1; j <= a; j++) {
			string s;
			cin >> s;
			str[i].push_back(s);
		}
	}

	memset(dp, 0x3f, sizeof(dp));
	dp[0] = 0;
	for (int i = 0; i < n; i++) {
		for (int j = t.length(); j > 0; j--) {
			for (auto s : str[i]) {
				if (s.length() <= j && check(j - 1, s))  // 如果当前这个字符串可以补在尾部，则比较是否是最优
					dp[j] = min(dp[j], dp[j - s.length()] + 1);
			}
		}
	}
	if (dp[t.length()] == 0x3f3f3f3f)
		cout << -1 << endl;
	else
		cout << dp[t.length()] << endl;
	return 0;
}

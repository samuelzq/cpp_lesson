/**
 * https://www.luogu.com.cn/problem/P3742
 *
 * @File:   P3742.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2024-07-26
 *
 **/
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int n;
	string str1, str2, str3;

	cin >> n;
	cin >> str1 >> str2;

	for (int i = 0; i < n; i++) {
		if (str2[i] > str1[i])
			break;
		else if (str2[i] == str1[i])
			str3 += str1[i];
		else
			str3 += str2[i];
	}
	if (str3.length() != n)
		cout << -1 << endl;
	else
		cout << str3 << endl;
	return 0;
}

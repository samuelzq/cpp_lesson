/**
 * https://www.luogu.com.cn/problem/P5601
 *
 * @File:   P5601.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2024-07-29
 *
 **/
#include <bits/stdc++.h>
using namespace std;

struct ext {
	string p;  // 题目
	string a;  // 答案
} e[110];

int main(void)
{
	int n, q;

	cin >> n >> q;

	for (int i = 0; i < n; i++)
		cin >> e[i].p >> e[i].a;

	for (int i = 0; i < q; i++) {
		string str[5];

		cin >> str[0] >> str[1] >> str[2] >> str[3] >> str[4];
		for (int j = 0; j < n; j++) {
			if (e[j].p == str[0]) {  // 找到这道题目
				for (int k = 1; k <= 4; k++) { // 对比答案是第几个选项
					if (e[j].a == str[k]) {
						cout << (char)('A' + (k - 1)) << endl;
						break;
					}
				}
				break;
			}
		}
	}
	return 0;
}

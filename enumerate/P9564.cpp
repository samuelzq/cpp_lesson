/**
 * https://www.luogu.com.cn/problem/P9564
 *
 * @File:   P9564.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2024-07-30
 *
 **/
#include <bits/stdc++.h>
using namespace std;

int color[7] = {0, 1, 0, 0, 1, 0, 0};  // 1和4是红色，

int main(void)
{
	int a, b;
	int rc, bc;

	cin >> a >> b;

	// 枚举每个骰子可能朝上的面，如果是红色则加到rc，蓝色则加到bc
	// 注意：每次枚举结束时，需要将当前的值从累计和中减掉
	for (int i = 1; i <= 6; i++) {
		rc = bc = 0;
		if (color[i])
			rc = i;
		else
			bc = i;
		for (int j = 1; j <= 6; j++) {
			if (color[j])
				rc += j;
			else
				bc += j;
			for (int k = 1; k <= 6; k++) {
				if (color[k])
					rc += k;
				else
					bc += k;

				//cout << rc << ' ' << bc << endl;
				if (rc == a && bc == b) {
					cout << "Yes" << endl;
					return 0;
				}
				if (color[k])
					rc -= k;
				else
					bc -= k;
			}
			if (color[j])
				rc -= j;
			else
				bc -= j;
		}
	}

	cout << "No" << endl;
	return 0;
}

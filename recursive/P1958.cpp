/**
 * https://www.luogu.com.cn/problem/P1958
 *
 * @File:   P1958.cpp
 * @Author: Lao Zhang <samuelzhang77@yahoo.com>
 * @Date:   2024-06-17
 *
 **/
#include <bits/stdc++.h>
using namespace std;

int aa[50][50] = {{0}};
int bb[50][50];

int main(void)
{
	int a, b, n;

	cin >> a >> b >> n;

	for (int i = 0; i < n; i++) {
		int x, y;

		cin >> x >> y;
		bb[x][y] = -1;
	}

	// 初始化首行和首列
	for (int i = 1; i <= b; i++) {
		if (bb[1][i] != -1)
			aa[1][i] = 1;
		else
			break;   // 不通了
	}

	for (int i = 1; i <= a; i++) {
		if (bb[i][1] != -1)
			aa[i][1] = 1;
		else
			break;   // 不通了
	}

	for (int i = 2; i <= a; i++) {
		for (int j = 2; j <= b; j++) {
			if (bb[i][j] == -1)  // 当前路口无法通行
				continue;
			aa[i][j] = aa[i - 1][j] + aa[i][j - 1];
		}
	}

	cout << aa[a][b] << endl;
	return 0;
}

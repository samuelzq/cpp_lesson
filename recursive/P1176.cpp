/**
 * https://www.luogu.com.cn/problem/P1176
 *
 * @File:   P1176.cpp
 * @Author: Lao Zhang <samuelzhang77@yahoo.com>
 * @Date:   2024-06-13
 *
 **/
#include <bits/stdc++.h>
using namespace std;

#define LL long long
LL a[1002][1002] = {{0}};
char c[1002][1002];

int main(void)
{
	int n, m;

	cin >> n >> m;

	for (int i = 0; i < m; i++) {
		int x, y;
		cin >> x >> y;
		c[x][y] = 'M';
	}

	for (int i = 1; i <= n; i++) {
		if (c[i][1] == 'M')
			break;
		a[i][1] = 1;
	}

	for (int i = 1; i <= n; i++) {
		if (c[1][i] == 'M')
			break;
		a[1][i] = 1;
	}
#if 0
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			printf("%2d", a[i][j]);
		}
		printf("\n");
	}
#endif
	for (int i = 2; i <= n; i++) {
		for (int j = 2; j <= n; j++) {
			if (c[i][j] != 'M')
				a[i][j] = (a[i - 1][j] + a[i][j - 1]) % 100003;
		}
	}
	cout << a[n][n] << endl;
	return 0;
}

/**
 *
 * @File:   P1216.cpp
 * @Author: Lao Zhang <samuelzhang77@yahoo.com>
 * @Date:   2024-06-21
 *
 **/
#include <bits/stdc++.h>
using namespace std;

int a[1010][1010] = {{0}};
int r;

int main(void)
{
	int c;
	cin >> r;

	cin >> a[1][1];
	for (int i = 2; i <= r; i++) {
		for (int j = 1; j <= i; j++) {
			int t;
			cin >> t;
			a[i][j] = t + max(a[i - 1][j - 1], a[i - 1][j]);
		}
	}

	c = 0;
	for (int i = 1; i <= r; i++)
		c = max(a[r][i], c);
	cout << c << endl;
	return 0;
}

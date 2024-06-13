/**
 *
 * @File:   P1644.cpp
 * @Author: Lao Zhang <samuelzhang77@yahoo.com>
 * @Date:   2024-06-13
 *
 **/
#include <bits/stdc++.h>
using namespace std;

#define LL long long

int w[4][2] = {{-2, 1}, {-1, 2}, {1, 2}, {2, 1}};
int f[22][22] = {{0}};
int p = 0;
int n, m;

void dfs(int x, int y)
{
	if(x == n && y == m) {
		p++;
		return;
	}

	if (x > n || x < 0 || y > m)
		return;

	for (int i = 0; i < 4; i++) {
		int xx, yy;
		xx = w[i][0] + x;
		yy = w[i][1] + y;
		dfs(xx, yy);
	}
}

int main(void)
{
	cin >> n >> m;

	dfs(0, 0);
	cout << p << endl;
	return 0;
}

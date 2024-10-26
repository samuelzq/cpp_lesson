/**
 * https://www.luogu.com.cn/problem/P4832
 *
 * @File:   P4832.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2024-10-24
 *
 **/
#include<bits/stdc++.h>
using namespace std;

string a;
const int D = 1e6 + 90;

int l, r, n;
int f[2 * D] = {0}, g[2 * D] = {0}; // 使用两个一维数组组合成滚动数组进行状态压缩

int main(void)
{
	cin >> n;

	// 由于状态迁移过程中价值可能时负值，因此初始值不能是0
	memset(f, 128, sizeof f);
	memset(g, 128, sizeof g);

	g[D] = 0; // 初始状态
	l = r = 0;
	for (int i = 1; i <= n; i++) {
		int sums=0, sumc=0;
		cin >> a;
		for (char c : a) {
			if (c == 's')
				sums++;
			else if(c == 'c')
				sumc++;
		}

		int v = sums, w = sums - sumc;
		l = min(l, l + w);
		r = max(r, r + w);
		for (int j = l + D; j <= r + D; j++)
			f[j] = max(f[j], max(g[j], g[j - w] + v));

		for (int j = l + D; j <= r + D; j++)
			g[j] = f[j];
	}
	cout << f[D] << endl;
	return 0;
}


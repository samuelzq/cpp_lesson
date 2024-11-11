/**
 * https://www.luogu.com.cn/problem/P2370
 *
 * @File:   P2370.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2024-11-07
 *
 **/
#include <bits/stdc++.h>
using namespace std;

struct file {
	int w, v;

	file() {w = v = 0;}

	file (int _w, int _v)
	{
		w = _w;
		v = _v;
	}
} f[1010];
int dp[1010] = {0};

bool cmp(file &f1, file &f2)
{
	return f1.w < f2.w;
}

int main(void)
{
	int n, p, s, l, ans;

	cin >> n >> p >> s;
	for (int i = 0; i < n; i++) {
		int w, v;
		cin >> w >> v;
		f[i] = file(w, v);
	}

	sort(f, f + n, cmp);  // 由于需要输出满足条件的最小值，因此将文件按大小排序
	l = 0;
	ans = 0;
	for (int i = 0; i < n; i++) {
		for (int j = s; j >= f[i].w; j--) {
			if (dp[j] <= dp[j - f[i].w] + f[i].v) {
				dp[j] = dp[j - f[i].w] + f[i].v;
				if (dp[j] >= p) {  // 背包最优解已经达成
					cout << f[i].w << endl;
					return 0;
				}
			}
		}
	}

	cout << "No Solution!" << endl;
	return 0;
}

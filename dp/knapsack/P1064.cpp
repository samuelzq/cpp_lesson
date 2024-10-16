/**
 * https://www.luogu.com.cn/problem/P1064
 *
 * @File:   P1064.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2024-10-16
 *
 **/
#include<bits/stdc++.h>
using namespace std;

struct node {
	int v;
	int w;

	node () {v = w = 0;};
	node (int _v, int _p) {
		v = _v, w = _p * _v;
	};
};

vector<node> h[65];
int dp[32005] = {0}, a[32005] = {0};

int main(void)
{
	int n, m;
	int v, p, q;
	node x;

	cin >> n >> m;
	for (int i = 1; i <= m; i++) {
		cin >> v >> p >> q;

		x = node(v, p);

		// 将主件和附件放在一组里
		if (q == 0)  // 主件，放在队首
			h[i].insert(h[i].begin(), x);
		else   // 附件，放在主件的后面
			h[q].push_back(x);
	}

	for (int i = 1; i <= m; i++) {
		if (h[i].empty())
			continue;

		int vv = h[i][0].v;

		// 选择将主件放入背包
		for (int j = 0; j <= n - vv; j++)
			a[j + vv]= dp[j] + h[i][0].w;
	
		// 对附件按0-1背包物品处理
		for (int j = 1; j < h[i].size(); j++) {
			for (int k = n; k >= vv + h[i][j].v; k--)
				a[k] = max(a[k], a[k - h[i][j].v] + h[i][j].w);
    		}

		for (int j = vv; j <= n; j++)  // 在装入该主件和不装入该主件之间选择最大的值
			dp[j] = max(dp[j], a[j]);
	}
	cout << dp[n] << endl;

	return 0;
}

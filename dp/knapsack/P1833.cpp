/**
 * https://www.luogu.com.cn/problem/P1833
 * @File:   P1833.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-10-16
 *
 */
#include <bits/stdc++.h>
using namespace std;

struct sakura {
	int t;
	int c;
	int p;

	sakura () {
		t = c = p = 0;
	}
	sakura (int _t, int _c, int _p) {
		t = _t, c = _c, p = _p;
	}
};

sakura s[10010];
int dp[1010] = {0};

int main(void)
{
	int h1, h2, m1, m2, n;
	int t;

	scanf("%d:%d %d:%d %d", &h1, &m1, &h2, &m2, &n);
	t = 60 - m1 + 60 * (h2 - h1 - 1) + m2;

	//printf("%d:%d ~ %d:%d  last %d\n", h1, m1, h2, m2, t);

	for (int i = 1; i <= n; i++) {
		int t, c, p;
		scanf("%d %d %d", &t, &c, &p);
		s[i] = sakura(t, c, p);
	}

	for (int i = 1; i <= n; i++) {
		if (s[i].p == 0 || s[i].p * s[i].t >= t) {
			for (int j = s[i].t; j <= t; j++)
				dp[j] = max(dp[j], dp[j - s[i].t] + s[i].c);
		} else {
			int k = 1;
			int tp = s[i].p;

			while (k < tp) {
				for (int j = t; j >= s[i].t * k; j--)
					dp[j] = max(dp[j], dp[j - s[i].t * k] + s[i].c * k);
				tp -= k;
				k = k << 1;
			}

			if (tp)
				for (int j = t; j >= s[i].t * tp; j--)
					dp[j] = max(dp[j], dp[j - s[i].t * tp] + s[i].c * tp);
		}
	}

	printf("%d\n", dp[t]);
	return 0;
}

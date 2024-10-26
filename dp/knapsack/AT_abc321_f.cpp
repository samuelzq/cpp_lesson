/**
 * https://www.luogu.com.cn/problem/AT_abc321_f
 *
 * @File:   AT_abc321_f.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2024-10-22
 *
 **/
#include <bits/stdc++.h>
using namespace std;

#define MOD    998244353
int dp[5005] = {0};

int main(void)
{
	int q, k;
	int i = 1;

	scanf("%d %d", &q, &k);
	for (int n = 1; n <= q; n++) {  // 每次增加一个被选的物品
		char c;
		int d;
		getchar();
		scanf("%c %d", &c, &d);

		dp[0] = 1;
		if (c == '+') { // 被选物品多了一个，正常的0-1背包
			for (int j = k; j >= d; j--) {
				dp[j] = (dp[j] + dp[j - d]) % MOD;
			}
		} else {
			for (int j = d; j <= k; j++) { // 如果移除一个数，那么当前的统计值就无法由该数得到
				dp[j] = (dp[j] - dp[j - d] + MOD) % MOD;
			}
		}
		printf("%d\n", dp[k]);
	}
	return 0;
}

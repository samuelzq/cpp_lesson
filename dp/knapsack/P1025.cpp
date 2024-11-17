/**
 * https://www.luogu.com.cn/problem/P1025
 *
 * @File:   P1025.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-11-08
 *
 */
#include <bits/stdc++.h>
using namespace std;

int dp[202][202][8];   // 考虑前i件物品，凑成总和j并且选择物品件数为num的方案总数 

int main(void)
{
	int n, k;

	cin >> n >> k;
	memset(dp, 0, sizeof(dp));
	dp[0][0][0] = 1;

	for (int i = 1; i <= n; i++) {          //物品维度
		for (int j = 0; j <= n; j++) {      //容量维度
			for (int m = 0; m <= k; m++) {  //件数维度
				//对每个物品考虑选择多次---当前选择物品i的总容量不能大于当前背包的容量j
				//并且当前选择的件数也不能超过限制件数k
				for (int l = 0; l * i <= j && l <= m; l++) {
					dp[i][j][m] += dp[i - 1][j - i * l][m - l];
				}
			}
		}
	}
	cout << dp[n][n][k] << endl;
	return 0;
}

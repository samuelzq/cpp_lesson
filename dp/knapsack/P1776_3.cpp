/**
 * https://www.luogu.com.cn/problem/P1776
 *
 * @File:   P1776_3.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-10-12
 *
 */
#include <bits/stdc++.h>
using namespace std;

#define N  3000
int _w[110], _v[110], m[110];
int w[N], v[N];
int dp[40004] = {0};
int cnt = 0;

// 二进制拆分函数  
void binarySplit(int i)
{
	int k = 1;
	int tm = m[i];

	while (k < tm) {
		cnt++;
		w[cnt] = k * _w[i];
		v[cnt] = k * _v[i];
		tm -= k;
		k <<= 1;  // k = 2^i
	}

	if (tm > 0) {
		cnt++;
		w[cnt] = tm * _w[i];
		v[cnt] = tm * _v[i];
    }
}

int main(void)
{
	int n, l;

	cin >> n >> l;

	for (int i = 1; i <= n; i++)
		cin >> _v[i] >> _w[i] >> m[i];

	cnt = 0;
	for (int i = 1; i <= n; i++)
		binarySplit(i);

	//cout << cnt << endl;

	for (int i = 1; i <= cnt; i++) {
		for (int j = l; j >= w[i]; j--) {
			dp[j] = max(dp[j], dp[j - w[i]] + v[i]);
		}
	}

	cout << dp[l] << endl;
	return 0;
}

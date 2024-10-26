/**
 * https://www.luogu.com.cn/problem/P1509
 *
 * @File:   P1509.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2024-10-21
 *
 **/
#include <bits/stdc++.h>
using namespace std;

int rp[110], rmb[110], t[110];
int dpt[110][110] = {{0}};
int dpn[110][110] = {{0}};

int main(void)
{
	int n, m, r;

	cin >> n;

	for (int i = 1; i <= n; i++)
		cin >> rmb[i] >> rp[i] >> t[i];

	cin >> m >> r;

	for (int i = 1; i <= n; i++) {
		for (int j = m; j >= rmb[i]; j--) {
			for (int k = r; k >= rp[i]; k--) {
				if (dpn[j][k] < dpn[j - rmb[i]][k - rp[i]] + 1) {
					dpn[j][k] = dpn[j - rmb[i]][k - rp[i]] + 1;
					dpt[j][k] = dpt[j - rmb[i]][k - rp[i]] + t[i];
				} else if (dpn[j][k] == dpn[j - rmb[i]][k - rp[i]] + 1) {
					dpt[j][k] = min(dpt[j][k], dpt[j - rmb[i]][k - rp[i]] + t[i]);
				}
			}
		}
	}
	cout << dpt[m][r] << endl;
	return 0;
}



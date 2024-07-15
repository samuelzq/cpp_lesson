/**
 * https://www.luogu.com.cn/problem/P1358
 *
 * @File:   P1358.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-06-22
 *
 */
#include <bits/stdc++.h>
using namespace std;

#define M 10007
long long int a[10004][110] = {{0}};

int main(void)
{
    int n, m;
    long long cnt = 1;

    cin >> n >> m;

    // 利用杨辉三角快速退出组合数
    a[0][0] = 1;
    for (int i = 1; i <= 10000; i++)
        for (int j = 0; j <= 100; j++)
            a[i][j] = (a[i - 1][j - 1] + a[i - 1][j]) % M;

    for (int i = 0; i < m; i++) {
        int t;
        cin >> t;
        cnt = cnt * a[n][t] % M;
        n -= t;
    }
    cout << cnt << endl;
    return 0;
}

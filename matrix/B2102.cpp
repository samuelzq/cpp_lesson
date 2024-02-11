/**
 * https://www.luogu.com.cn/problem/B2101
 *
 * @File:   B2102.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-02-10
 *
 */
#include <bits/stdc++.h>

using namespace std;

int a[102][102];

int main(void)
{
    int m, n, sum;

    cin >> m >> n;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];

    sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[0][i];
        if (m - 1 != 0)
            sum += a[m - 1][i];

    }

    for (int j = 1; j < m - 1; j++)
    {
        sum += a[j][0];
        if (n - 1 != 0)
            sum += a[j][n - 1];
    }

    cout << sum << endl;
    return 0;
}

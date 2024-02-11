/**
 * https://www.luogu.com.cn/problem/B2106
 *
 * @File:   B2106.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-02-09
 *
 */
#include <bits/stdc++.h>

using namespace std;

int a[105][104];

int main(void)
{
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> a[i][j];

    for (int i = 0; i < max(n, m); i++)
    {
        for (int j = i; j < max(n, m); j++)
        {
            int t = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = t;
        }
    }

    for (int i = 0; i < m; i++)
    {
        cout << a[i][0];
        for (int j = 1; j < n; j++)
            cout << ' ' << a[i][j];
        cout << endl;
    }
    return 0;
}

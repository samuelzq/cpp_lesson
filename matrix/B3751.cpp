/**
 * https://www.luogu.com.cn/problem/B3751
 *
 * @File:   B3751.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-02-10
 *
 */
#include <bits/stdc++.h>

using namespace std;

char a[55][55];

int main(void)
{
    int n, m, k;

    cin >> n >> m >> k;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            a[i][j] = '.';

    for (int i = 0; i < k; i++)
    {
        int x, y;
        char c, d;
        cin >> x >> y >> c >> d;

        if (d == 'R')
        {
            for (int i = y; i <= m; i++)
                a[x][i] = c;
        }
        else if (d == 'L')
        {
            for (int i = y; i >= 1; i--)
                a[x][i] = c;
        }
        else if (d == 'U')
        {
            for (int i = x; i >= 1; i--)
                a[i][y] = c;
        }
        else if (d == 'D')
        {
            for (int i = x; i <= n; i++)
                a[i][y] = c;
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
            cout << a[i][j];
        cout << endl;
    }
    return 0;
}

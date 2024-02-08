/**
 * https://www.luogu.com.cn/problem/CF14A
 *
 * @File:   CF14A.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-02-01
 *
 */
#include <iostream>

using namespace std;

char c[55][55];

int main(void)
{
    char t;
    int n, m;
    int x, y, z, w;

    cin >> n >> m;
    x = m;
    y = n;
    z = w = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> t;
            if (t == '*')
            {
                x = (x > j) ? j : x;
                y = (y > i) ? i : y;
                z = (z < j) ? j : z;
                w = (w < i) ? i : w;
            }
            c[i][j] = t;
        }

    }

    for (int i = y; i <= w; i++)
    {
        for (int j = x; j <= z; j++)
            cout << c[i][j];
        cout << endl;
    }
    return 0;
}

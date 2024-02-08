/**
 * https://www.luogu.com.cn/problem/CF16A
 *
 * @File:   CF16A.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-02-06
 *
 */
#include <bits/stdc++.h>

using namespace std;

string f[101];

int main(void)
{
    int n, m;

    cin >> n >> m;
    for (int i = 0; i < n; i++)
        cin >> f[i];

    for (int i = 0; i < m - 1; i++)
    {
        if (f[0][i] != f[0][i + 1])
        {
            cout << "NO" << endl;
            return 0;
        }
    }

    for (int i = 1; i < n; i++)
    {
        if (f[i] == f[i - 1])
        {
            cout << "NO" << endl;
            return 0;
        }

        for (int j = 0; j < m - 1; j++)
        {
            if (f[i][j] != f[i][j + 1])
            {
                cout << "NO" << endl;
                return 0;
            }
        }
    }
    cout << "YES" << endl;
    return 0;
}

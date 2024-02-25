/**
 *
 * @File:   CF870A.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-02-11
 *
 */
#include <bits/stdc++.h>

using namespace std;

int a[10] = {0};

int main(void)
{
    int n, m, f;

    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        a[t] |= 1;
    }

    for (int i = 0; i < m; i++)
    {
        int t;
        cin >> t;
        a[t] |= 2;
    }

    for (int i = 1; i <= 9; i++)
    {
        if ((a[i] & 3) == 3)
        {
            cout << i << endl;
            return 0;
        }
    }

    f = 1;
    for (int i = 1; i <= 9; i++)
    {
        if ((a[i] & 1) == 1)
        {
            cout << i;
            a[i] = 0;
            f = 2;
            break;
        }
        if ((a[i] & 2) == 2)
        {
            cout << i;
            a[i] = 0;
            f = 1;
            break;
        }
    }

    for (int i = 1; i <= 9; i++)
    {
        if ((a[i] & f) == f)
        {
            cout << i << endl;
            a[i] = 0;
            break;
        }
    }

    return 0;
}

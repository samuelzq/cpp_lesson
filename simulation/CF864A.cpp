/**
 * https://www.luogu.com.cn/problem/CF864A
 *
 * @File:   CF864A.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-02-11
 *
 */
#include <bits/stdc++.h>

using namespace std;

int a[110] = {0};

int main(void)
{
    int n, k, a1, a2;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        a[t]++;
    }

    k = 0;
    for (int i = 1; i <= 100; i++)
    {
        if (a[i])
        {
            if (k == 0)
                a1 = i;
            else if (k >= 2)
            {
                cout << "NO" << endl;
                return 0;
            }
            else if (a[i] != a[a1])
            {
                cout << "NO" << endl;
                return 0;
            }
                a2 = i;
            k++;
        }
    }
    if (k == 1)
        cout << "NO" << endl;
    else
    {
        cout << "YES" << endl;
        cout << a1 << ' ' << a2 << endl;
    }
    return 0;
}

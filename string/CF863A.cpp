/**
 * https://www.luogu.com.cn/problem/CF863A
 *
 * @File:   CF863A.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-02-08
 *
 */
#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int e;
    string n;

    cin >> n;

    for (e = n.length() - 1; e >= 0; e--)
    {
        if (n[e] != '0')
            break;
    }

    for (int i = 0; i < (e + 1) / 2; i++)
    {
        if (n[i] != n[e - i])
        {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}

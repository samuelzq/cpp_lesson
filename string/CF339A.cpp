/**
 * https://www.luogu.com.cn/problem/CF339A
 *
 * @File:   CF339A.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-02-09
 *
 */
#include <bits/stdc++.h>

using namespace std;

int cc[4] = {0};

int main(void)
{
    bool f = false;
    string s;

    cin >> s;
    for (char c : s)
    {
        if (c != '+')
            cc[c - '0']++;
    }

    for (int i = 1; i < 4; i++)
    {
        for (int j = 0; j < cc[i]; j++)
        {
            if (f)
                cout << '+';
            cout << i;
            f = true;
        }
    }
    cout << endl;
    return 0;
}

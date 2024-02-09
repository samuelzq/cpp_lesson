/**
 * https://www.luogu.com.cn/problem/AT_joi2022_yo1a_c
 *
 * @File:   AT_joi2022_yo1a_c.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-02-09
 *
 */
#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int b = 0;
    int n;
    string s;

    cin >> n >> s;
    for (char c : s)
    {
        b |= (1 << (c - 'A'));
    }

    n = 0;
    while (b)
    {
        if (b & 1)
            n++;
        b >>= 1;
    }
    if (n >= 3)
        cout << "Yes";
    else
        cout << "No";
    cout << endl;
    return 0;
}

/**
 * https://www.luogu.com.cn/problem/CF520A
 *
 * @File:   CF520A.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-02-09
 *
 */
#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int n, b = 0;
    string s;

    cin >> n >> s;

    if (n < 26)
    {
        cout << "NO" << endl;
        return 0;
    }

    for (char c : s)
    {
        char t = tolower(c);
        b |= 1 << (t - 'a');
    }

    if (b == 0x3ffffff)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}

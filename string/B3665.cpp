/**
 * https://www.luogu.com.cn/problem/B3865
 *
 * @File:   B3665.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-02-09
 *
 */
#include <bits/stdc++.h>

using namespace std;

string str = "---------------------------------------------------";

int main(void)
{
    int n;
    cin >> n;

    for (int i = 0; i < n / 2; i++)
    {
        str[i] = str[n - 1 - i] = '+';
        cout << str.substr(0, n) << endl;
        str[i] = str[n - 1 - i] = '-';
    }
    str[n / 2] = '+';
    cout << str.substr(0, n) << endl;
    str[n / 2] = '-';
    for (int i = 1; i <= n / 2; i++)
    {
        str[(n) / 2 - i] = str[(n) / 2 + i] = '+';
        cout << str.substr(0, n) << endl;
        str[(n) / 2 - i] = str[(n) / 2 + i] = '-';
    }
    return 0;
}

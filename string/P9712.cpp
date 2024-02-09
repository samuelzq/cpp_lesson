/**
 * https://www.luogu.com.cn/problem/P9712
 *
 * @File:   P9712.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-02-09
 *
 */
#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    string s;

    cin >> s;

    cout << "solution-";
    for (char c : s)
    {
        if (c == '_')
            cout << '-';
        else
            cout << (char)(tolower(c));
    }
    cout << endl;
    return 0;
}

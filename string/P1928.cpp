/**
 * https://www.luogu.com.cn/problem/P1928
 *
 * @File:   P1928.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-02-16
 *
 */
#include <bits/stdc++.h>

using namespace std;

string decmp()
{
    char c;
    int n = 0;
    string s(""), t("");

    while (cin >> c)
    {
        if (c == '[')
        {
            cin >> n;
            t = decmp();
            for (int i = 0; i < n; i++)
                s += t;
        }
        else if (c == ']')
            return s;
        else
            s += c;
    }
    return s;
}

int main(void)
{
    cout << decmp();
    return 0;
}

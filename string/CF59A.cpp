/**
 * https://www.luogu.com.cn/problem/CF59A
 *
 * @File:   CF59A.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-02-08
 *
 */
#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int l, u;
    string s;

    cin >> s;
    l = u = 0;
    for (char c : s)
    {
        if (isupper(c))
            u++;
        else
            l++;
    }
    if (u <= l)
    {
        for (char c : s)
            cout << (char)(tolower(c));
    }
    else
    {
        for (char c : s)
            cout << (char)(toupper(c));
    }
    cout << endl;
    return 0;
}

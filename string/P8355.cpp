/**
 * https://www.luogu.com.cn/problem/P8355
 *
 * @File:   P8355.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-02-08
 *
 */
#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int n, l, r;
    string s;

    cin >> n >> s;

    l = r = 0;
    for (char c : s)
    {
        if (c == '\(')
            l++;
        else
            r++;
    }
    cout << 2 * min(l, r) << endl;
    return 0;
}

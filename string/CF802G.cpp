/**
 * https://www.luogu.com.cn/problem/CF802G
 *
 * @File:   CF802G.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-02-08
 *
 */
#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int f = 0;
    string s;

    cin >> s;
    for (char c : s)
    {
        if (f == 0)
        {
            if (c == 'h')
                f++;
        }
        else if (f == 1)
        {
            if (c == 'e')
                f++;
        }
        else if (f == 2 || f == 4)
        {
            if (c == 'i')
                f++;
        }
        else if (f == 3)
        {
            if (c == 'd')
                f++;
        }
    }
    if (f == 5)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

/**
 * https://www.luogu.com.cn/problem/CF519A
 *
 * @File:   CF519A.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-02-08
 *
 */
#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int w, b;
    string s;

    w = b = 0;
    while (cin >> s)
    {
        for (char c : s)
        {
            if (c == 'Q')
                w += 9;
            else if (c == 'R')
                w += 5;
            else if (c == 'B')
                w += 3;
            else if (c == 'N')
                w += 3;
            else if (c == 'P')
                w += 1;
            else if (c == 'q')
                b += 9;
            else if (c == 'r')
                b += 5;
            else if (c == 'b')
                b += 3;
            else if (c == 'n')
                b += 3;
            else if (c == 'p')
                b += 1;
        }
    }
    if (w > b)
        cout << "White" << endl;
    else if (w == b)
        cout << "Draw" << endl;
    else
        cout << "Black" << endl;
    return 0;
}


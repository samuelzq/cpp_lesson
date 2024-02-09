/**
 * https://www.luogu.com.cn/problem/P6745
 *
 * @File:   P6745.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-02-09
 *
 */
#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int k, c;
    string x, o;

    cin >> k >> x;

    if (k > x.length())
    {
        c = 0;
        o += '1';
        for (int i = 0; i + x.length() < k; i++)
            o += '0';
        o += x;
    }
    else
    {
        o = x;
        c = 1;
        // big number addition
        for (int i = x.length() - 1 - k; i >= 0; i--)
        {
            o[i] = o[i] + c;
            if (o[i] <= '9')
            {
                c = 0;
                break;
            }
            o[i] = '0';
        }
    }
    if (c)
        cout << c;
    cout << o << endl;
    return 0;
}

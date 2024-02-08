/**
 * https://www.luogu.com.cn/problem/CF58A
 *
 * @File:   CF58A.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-02-08
 *
 */
#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int f;
    string str;

    f = 0;   // how many charater is found
    cin >> str;
    for (char c : str)
    {
        if (f == 0) // h
        {
            if (c == 'h')
                f = 1;
        }
        else if (f == 1)
        {
            if (c == 'e')
               f = 2;
        }
        else if (f == 2 || f == 3)
        {
            if (c == 'l')
                f++;
        }
        else if (f == 4)
        {
            if (c == 'o')
                f++;
        }
    }

    if (f == 5)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}

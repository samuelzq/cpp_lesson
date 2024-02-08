/**
 * https://www.luogu.com.cn/problem/P7583
 *
 * @File:   P7583.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-02-08
 *
 */
#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    string str;

    cin >> str;

    for (char c : str)
    {
        switch (c)
        {
            case 'C':
            case 'A':
            case 'M':
            case 'B':
            case 'R':
            case 'I':
            case 'D':
            case 'G':
            case 'E':
                break;
            default:
                cout << c;
        }
    }
    cout << endl;
    return 0;
}

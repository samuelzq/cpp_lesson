/**
 * https://www.luogu.com.cn/problem/CF118A
 *
 * @File:   CF118A.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-02-07
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
        char t = tolower(c);

        switch (t)
        {
            case 'a':
            case 'o':
            case 'y':
            case 'e':
            case 'u':
            case 'i':
                break;
            default:
                cout << '.' << t;
                break;
        }
    }
    cout << endl;
    return 0;
}

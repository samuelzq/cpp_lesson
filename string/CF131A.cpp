/**
 * https://www.luogu.com.cn/problem/CF131A
 *
 * @File:   CF131A.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-02-08
 *
 */
#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int l;
    bool f;
    string str;

    l = 0;
    cin >> str;

    f = islower(str[0]) ? true : false;
    for (char c : str)
    {
        if (islower(c))
            l++;
    }

    if (l == 0 || (l == 1 && f))
    {
        for (char c : str)
        {
            if (islower(c))
                cout << (char)toupper(c);
            else
                cout << (char)tolower(c);
        }
    }
    else
        cout << str;
    cout << endl;
    return 0;
}

/**
 * https://www.luogu.com.cn/problem/CF112A
 *
 * @File:   CF112A.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-01-14
 *
 */
#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    string str1, str2;

    cin >> str1 >> str2;

    for (int i = 0; i < str1.length(); i++)
    {
        if ('a' <= str1[i] && str1[i] <= 'z')
            str1[i] = str1[i] - 'a' + 'A';
    }

    for (int i = 0; i < str2.length(); i++)
    {
        if ('a' <= str2[i] && str2[i] <= 'z')
            str2[i] = str2[i] - 'a' + 'A';
    }

    if (str1 == str2)
        cout << 0;
    else if (str1 < str2)
        cout << -1;
    else
        cout << 1;
    cout << endl;
    return 0;
}

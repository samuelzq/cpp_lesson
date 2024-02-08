/**
 * https://www.luogu.com.cn/problem/B2116
 *
 * @File:   B2116.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-02-04
 *
 */
#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    int l;
    string str;

    cin >> str;
    l = str.length();

    for (int i = 0; i < l; i++)
    {
        if ('a' <= str[i] && str[i] <= 'z')
            str[i] = str[i] - 'a' + 'A';
        else
            str[i] = str[i] - 'A' + 'a';
    }

    for (int i = 0; i < l / 2; i++)
    {
        char c;
        c = str[i];
        str[i] = str[l - 1 - i];
        str[l - 1 - i] = c;
    }

    for (int i = 0; i < l; i++)
    {
        if ('a' <= str[i] && str[i] <= 'z')
            str[i] = (str[i] - 'a' + 3) % 26 + 'a';
        else
            str[i] = (str[i] - 'A' + 3) % 26 + 'A';
    }

    cout << str << endl;
    return 0;
}

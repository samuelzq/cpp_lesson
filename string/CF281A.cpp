/**
 * https://www.luogu.com.cn/problem/CF281A
 *
 * @File:   CF281A.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-01-14
 *
 */
#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    string str;

    cin >> str;

    if ('a' <= str[0] && str[0] <= 'z')
        str[0] = str[0] - 'a' + 'A';

    cout << str << endl;
    return 0;
}

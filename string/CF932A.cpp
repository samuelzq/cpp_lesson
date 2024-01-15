/**
 * https://www.luogu.com.cn/problem/CF932A
 *
 * @File:   CF932A.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-01-14
 *
 */
#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int l, i;
    string str;

    cin >> str;
    l = str.length();

    for (int i = l - 2; i >= 0; i--)
        str += str[i];

    cout << str << endl;
    return 0;
}

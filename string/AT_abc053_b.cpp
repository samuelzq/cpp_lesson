/**
 * https://www.luogu.com.cn/problem/AT_abc053_b
 *
 * @File:   AT_abc053_b.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-01-14
 *
 */
#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int n, i, j;
    string str;

    cin >> str;
    for (i = 0; i < str.length(); i++)
    {
        if (str[i] == 'A')
            break;
    }

    for (j = str.length() - 1; j >= i; j--)
    {
        if (str[j] == 'Z')
            break;
    }
    cout << j - i + 1 << endl;
    return 0;
}

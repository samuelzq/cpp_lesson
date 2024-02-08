/**
 * https://www.luogu.com.cn/problem/AT_abc071_b
 *
 * @File:   AT_abc071_b.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-01-26
 *
 */
#include <iostream>

using namespace std;

int a[26] = {0};

int main(void)
{
    char c;
    int i;

    while (cin >> c)
        a[c - 'a'] = 1;

    for (i = 0; i < 26; i++)
    {
        if (!a[i])
            break;
    }

    if (i < 26)
        cout << (char)('a' + i);
    else
        cout << "None";

    cout << endl;
    return 0;
}


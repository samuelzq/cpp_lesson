/**
 * https://www.luogu.com.cn/problem/AT_arc031_1
 *
 * @File:   AT_arc031_1.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-01-29
 *
 */
#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    string str;
    int i, l;

    cin >> str;
    l = str.length();
    for (i = 0; i < l / 2; i++)
    {
        if (str[i] != str[l - 1 - i])
            break;
    }

    if (i == l / 2)
        cout << "YES";
    else
        cout << "NO";
    cout << endl;

    return 0;
}


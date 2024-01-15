/**
 * https://www.luogu.com.cn/problem/AT_utpc2012_01
 *
 * @File:   AT_utpc2012_01.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-01-14
 *
 */
#include <bits/stdc++.h>

using namespace std;

int a[10] = {0}, b[10] = {0};

int main(void)
{
    string str;

    cin >> str;

    //cout << str << '\n';

    a[str[0] - '0']++;
    a[str[1] - '0']++;
    a[str[2] - '0']++;
    a[str[3] - '0']++;

    b[str[9] - '0']++;
    b[str[8] - '0']++;
    b[str[5] - '0']++;
    b[str[6] - '0']++;

    for (int i = 0; i < 10; i++)
    {
        if (a[i] != b[i])
        {
            cout << "no" << endl;
            return 0;
        }
    }

    cout << "yes" << endl;
    return 0;
}


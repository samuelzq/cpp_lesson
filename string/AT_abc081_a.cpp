/**
 * https://www.luogu.com.cn/problem/AT_abc081_a
 *
 * @File:   AT_abc081_a.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-01-27
 *
 */
#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    int out;
    string str;

    cin >> str;

    out = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if ('0' <= str[i] && str[i] <= '9')
            out += str[i] - '0';
    }
    cout << out << endl;
    return 0;
}

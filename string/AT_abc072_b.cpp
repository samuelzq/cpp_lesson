/**
 * https://www.luogu.com.cn/problem/AT_abc072_b
 *
 * @File:   AT_abc072_b.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-01-28
 *
 */
#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    string str;

    cin >> str;

    for (int i = 0; i < str.length(); i++)
    {
        if (i % 2 == 0)
            cout << str[i];
    }
    cout << endl;
    return 0;
}

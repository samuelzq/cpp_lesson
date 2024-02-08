/**
 * https://www.luogu.com.cn/problem/B2122
 * @File:   b2122.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-02-05
 *
 */
#include <iostream>

using namespace std;

int main(void)
{
    string str;

    while (cin >> str)
    {
        for (int i = str.length()  - 1; i >= 0; i--)
            cout << str[i];
        cout << endl;
    }
    return 0;
}

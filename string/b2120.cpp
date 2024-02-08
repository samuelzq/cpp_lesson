/**
 * https://www.luogu.com.cn/problem/B2120
 *
 * @File:   b2120.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-02-04
 *
 */
#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    string str;

    cin >> str;

    cout << str.length();
    while (cin >> str)
    {
        cout << ',' << str.length();
    }
    cout << endl;
    return 0;
}

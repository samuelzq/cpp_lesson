/**
 * https://www.luogu.com.cn/problem/CF766A
 *
 * @File:   CF766A.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-01-26
 *
 */
#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    string str1, str2;

    cin >> str1 >> str2;

    if (str1 == str2)
        cout << -1;
    else
    {
        if (str1.length() > str2.length())
            cout << str1.length();
        else
            cout << str2.length();
    }
    cout << endl;
    return 0;
}

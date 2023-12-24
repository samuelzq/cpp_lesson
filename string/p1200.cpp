/**
 * https://www.luogu.com.cn/problem/P1200
 *
 * @File:   p1200.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2023-12-23
 *
 */
#include <iostream>

using namespace std;

int main(void)
{
    int a, b;
    string str1, str2;

    cin >> str1 >> str2;

    a = b = 1;
    for (int i = 0; i < str1.length(); i++)
        a = a * (str1[i] - 'A' + 1) % 47;
    for (int i = 0; i < str2.length(); i++)
        b = b * (str2[i] - 'A' + 1) % 47;

    if (a == b)
        cout << "GO";
    else
        cout << "STAY";
    cout << endl;
    return 0;
}

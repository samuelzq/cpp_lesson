/**
 * https://www.luogu.com.cn/problem/AT_abc079_c
 *
 * @File:   AT_abc079_c.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-02-05
 *
 */
#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    int a, b, c, d;
    string num;

    cin >> num;
    a = num[0] - '0';
    b = num[1] - '0';
    c = num[2] - '0';
    d = num[3] - '0';

    if (a + b + c + d == 7)
        cout << num[0] << '+' << num[1] << '+' << num[2] << '+' << num[3] << '=' << 7 << endl;
    else if (a - b + c + d == 7)
        cout << num[0] << '-' << num[1] << '+' << num[2] << '+' << num[3] << '=' << 7 << endl;
    else if (a + b - c + d == 7)
        cout << num[0] << '+' << num[1] << '-' << num[2] << '+' << num[3] << '=' << 7 << endl;
    else if (a + b + c - d == 7)
        cout << num[0] << '+' << num[1] << '+' << num[2] << '-' << num[3] << '=' << 7 << endl;
    else if (a + b - c - d == 7)
        cout << num[0] << '+' << num[1] << '-' << num[2] << '-' << num[3] << '=' << 7 << endl;
    else if (a - b + c - d == 7)
        cout << num[0] << '-' << num[1] << '+' << num[2] << '-' << num[3] << '=' << 7 << endl;
    else if (a - b - c + d == 7)
        cout << num[0] << '-' << num[1] << '-' << num[2] << '+' << num[3] << '=' << 7 << endl;
    else if (a - b - c - d == 7)
        cout << num[0] << '-' << num[1] << '-' << num[2] << '-' << num[3] << '=' << 7 << endl;

    return 0;
}

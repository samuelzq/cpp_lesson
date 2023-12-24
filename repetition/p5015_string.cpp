/**
 * https://www.luogu.com.cn/problem/P5015
 *
 * @File:   p5015_string.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2023-12-16
 *
 */
#include <iostream>

using namespace std;

int main(void)
{
    int n;
    string str;

    getline(cin, str);
    n = str.length();
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == ' ')
            n--;
    }
    cout << n << endl;
    return 0;
}

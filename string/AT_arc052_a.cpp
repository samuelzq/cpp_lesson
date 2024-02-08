/**
 * https://www.luogu.com.cn/problem/AT_arc052_a
 *
 * @File:   AT_arc052_a.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-01-19
 *
 */
#include <iostream>

using namespace std;

int main(void)
{
    string str;

    cin >> str;
    for (int i = 0; i < str.length(); i++)
    {
        if ('0' <= str[i] && str[i] <= '9')
            cout << str[i];
    }
    cout << endl;
    return 0;
}

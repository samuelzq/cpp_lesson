/**
 * https://www.luogu.com.cn/problem/AT_abc079_a
 *
 * @File:   AT_abc079_a.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-02-05
 *
 */
#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    string str;

    cin >> str;

    for (int i = 0; i < str.length() - 2; i++)
    {
        if (str[i] == str[i + 1] && str[i + 1] == str[i + 2])
        {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}

/**
 * https://www.luogu.com.cn/problem/AT_arc035_a
 *
 * @File:   AT_arc035_a.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-01-27
 *
 */
#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    int l;
    string str;

    cin >> str;
    l = str.length();
    for (int i = 0; i < l / 2; i++)
    {
        if ((str[i] != str[l - 1 - i]) && (str[i] != '*' && str[l - 1 - i] != '*'))
        {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}

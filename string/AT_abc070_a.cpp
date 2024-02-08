/**
 * https://www.luogu.com.cn/problem/AT_abc070_a
 *
 * @File:   AT_abc070_a.cpp
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

    if (str[0] == str[2])
        cout << "Yes";
    else
        cout << "No";

    cout << endl;

    return 0;
}

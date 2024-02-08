/**
 * https://www.luogu.com.cn/problem/AT_abc077_a
 *
 * @File:   AT_abc077_a.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-02-04
 *
 */
#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    string str1, str2;

    cin >> str1 >> str2;

    if (str1[0] == str2[2] && str1[2] == str2[0] && str1[1] == str2[1])
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}

/**
 * https://www.luogu.com.cn/problem/AT_code_festival_2017_quala_a
 *
 * @File:   AT_code_festival_2017_quala_a.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-01-28
 *
 */
#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    string str1 = "YAKI";
    string str2;

    cin >> str2;

    if (str1 == str2.substr(0, 4))
        cout << "Yes";
    else
        cout << "No";
    cout << endl;
    return 0;
}

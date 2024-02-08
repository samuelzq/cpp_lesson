/**
 * https://www.luogu.com.cn/problem/AT_codefestival_2015_qualA_a
 *
 * @File:   AT_codefestival_2015_qualA_a.cpp
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

    str[str.length() - 1] = '5';
    cout << str << endl;
    return 0;
}

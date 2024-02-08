/**
 * https://www.luogu.com.cn/problem/AT_abc073_a
 *
 * @File:   AT_abc073_a.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-01-26
 *
 */
#include <iostream>
#include <cstring>

using namespace std;

int main(void)
{
    string str;

    cin >> str;

    if (str[0] == '9' || str[1] == '9')
        cout << "Yes";
    else
        cout << "No";

    cout << endl;
    return 0;
}

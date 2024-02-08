/**
 * https://www.luogu.com.cn/problem/AT_codefestival_2015_final_a
 *
 * @File:   AT_codefestival_2015_final_a.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-01-28
 *
 */
#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    string str1, str2, str3;

    cin >> str1 >> str2 >> str3;

    if (str1.length() == 5 && str2.length() == 7 && str3.length() == 5)
        cout << "valid";
    else
        cout << "invalid";
    cout << endl;
    return 0;
}

/**
 * https://www.luogu.com.cn/problem/AT_code_festival_2017_qualc_a
 *
 * @File:   AT_code_festival_2017_qualc_a.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-02-04
 *
 */
#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    string str;

    cin >> str;

    for (int i = 0; i < str.length() - 1; i++)
    {
        if (str[i] == 'A' && str[i + 1] == 'C')
        {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}

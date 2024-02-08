/**
 * https://www.luogu.com.cn/problem/B2111
 *
 * @File:   b2111.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-01-19
 *
 */
#include <iostream>

using namespace std;

int main(void)
{
    int c;
    double s;
    string str1, str2;

    cin >> s;
    cin >> str1 >> str2;

    c = 0;
    for (int i = 0; i < str1.length(); i++)
    {
        if (str1[i] == str2[i])
            c++;
    }

    if (1.00 * c / str1.length() - s > 0.0000000001)
        cout << "yes";
    else
        cout << "no";
    cout << endl;
    return 0;
}

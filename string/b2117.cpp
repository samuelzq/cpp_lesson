/**
 * https://www.luogu.com.cn/problem/B2117
 *
 * @File:   b2117.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-02-05
 *
 */
#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    int n;

    cin >> n;
    while (n--)
    {
        string str;

        cin >> str;

        if (islower(str[0]))
            str[0] = toupper(str[0]);
        for (int i = 1; i < str.length(); i++)
        {
            if (isupper(str[i]))
                str[i] = tolower(str[i]);
        }
        cout << str << endl;
    }
    return 0;
}

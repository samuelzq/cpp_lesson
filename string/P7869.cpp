/**
 * https://www.luogu.com.cn/problem/P7869
 *
 * @File:   P7869.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-02-16
 *
 */
#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    string str;

    getline(cin, str);

    for (int i = 0; i < str.length() - 1; i++)
    {
        if (str[i] == '\\')
        {
            if (str[i + 1] == 'n')
            {
                cout << "linux" << endl;
                return 0;
            }
            else if (str[i + 1] == 'r')
            {
                if ((i + 2) == str.length())
                {
                    cout << "mac" << endl;
                    return 0;
                }
                else
                {
                    if ((i + 3) == str.length())
                    {
                        cout << "windows" << endl;
                    }
                    else
                    {
                        if (str[i + 2] == '\\' && str[i + 3] == 'n')
                            cout << "windows" << endl;
                        else
                            cout << "mac" << endl;
                    }
                    return 0;
                }
            }
        }
    }
    cout << "linux" << endl;
    return 0;
}

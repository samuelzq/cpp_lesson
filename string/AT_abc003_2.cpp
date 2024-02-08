/**
 * https://www.luogu.com.cn/problem/AT_abc003_2
 *
 * @File:   AT_abc003_2.cpp
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

    if (str1.length() != str2.length())
    {
        cout << "You will lose" << endl;
        return 0;
    }

    for (int i = 0; i < str1.length(); i++)
    {
        if (str1[i] != str2[i])
        {
            if (str1[i] == '@')
            {
                if (str2[i] != 'a' && str2[i] != 't' && str2[i] != 'c' && str2[i] != 'o' && str2[i] != 'd' && str2[i] != 'e' && str2[i] != 'r')
                {
                    cout << "You will lose" << endl;
                    return 0;
                }
            }
            else if (str2[i] == '@')
            {
                if (str1[i] != 'a' && str1[i] != 't' && str1[i] != 'c' && str1[i] != 'o' && str1[i] != 'd' && str1[i] != 'e' && str1[i] != 'r')
                {
                    cout << "You will lose" << endl;
                    return 0;
                }
            }
            else
            {
                cout << "You will lose" << endl;
                return 0;
            }

        }
    }
    cout << "You can win" << endl;
    return 0;
}

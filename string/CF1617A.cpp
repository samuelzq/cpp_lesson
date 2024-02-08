/**
 * https://www.luogu.com.cn/problem/CF1617A
 *
 * @File:   CF1617A.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-02-04
 *
 */
#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int t;

    cin >> t;

    while (t--)
    {
        string str1, str2;

        cin >> str1 >> str2;

        sort(str1.begin(), str1.end());

        if (str2 == "abc" && str1[0] == 'a')
        {
            int i, j;
            i = 1;
            j = 2;
            while (1)
            {
                for (; i < str1.length(); i++)
                {
                    if (str1[i] == 'b')
                        break;
                }

                if (i >= str1.length())
                    break;

                for (; j < str1.length(); j++)
                {
                    if (str1[j] == 'c')
                        break;
                }

                if (i < str1.length() && j < str1.length())
                {
                    str1[i] = 'c';
                    str1[j] = 'b';
                }
                i++;
                j++;
                if (i >= str1.length() || j >= str1.length() || str1[j] != 'c')
                    break;
            }

        }
        cout << str1 << endl;
    }
    return 0;
}

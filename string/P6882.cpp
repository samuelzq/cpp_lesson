/**
 * https://www.luogu.com.cn/problem/P6882
 *
 * @File:   P6882.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-02-08
 *
 */
#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int n;

    cin >> n;
    while (n--)
    {
        int s = 0;
        string str;

        do {
            cin >> str;
            if (isupper(str[0]))
            {
                s++;
                for (int i = 1; i < str.length(); i++)
                {
                    char c = str[i];
                    if (('0' <= c && c <= '9') || isupper(c))
                    {
                        s--;
                        break;
                    }
                }
            }
        } while (*str.rbegin() != '.' && *str.rbegin() != '?' && *str.rbegin() != '!');

        cout << s << endl;
        s = 0;
    }
    return 0;
}

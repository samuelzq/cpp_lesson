/**
 * https://www.luogu.com.cn/problem/P6382
 *
 * @File:   P6382.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-02-09
 *
 */
#include <bits/stdc++.h>

using namespace std;

int o[6] = {0};
int main(void)
{
    string s;

    cin >> s;

    if (s[0] == 'M' && s[1] == 'D' && s[2] == 'A')
    {
        for (int i = s.length() - 1; i >= 3; i--)
        {
            if (isdigit(s[i]))
            {
                switch (s[i])
                {
                    case '1':
                    case '9':
                        o[1] = 1;
                        break;
                    case '2':
                    case '8':
                        o[2] = 1;
                        break;
                    case '3':
                    case '7':
                        o[3] = 1;
                        break;
                    case '4':
                    case '6':
                        o[4] = 1;
                        break;
                    case '5':
                    case '0':
                        o[5] = 1;
                        break;
                }
                break;
            }
        }
        cout << o[1];
        for (int i = 2; i < 6; i++)
            cout << ' ' << o[i];
    }
    else
    {
        cout << 1;
        for (int i = 0; i < 4; i++)
            cout << ' ' << 1;
    }
    cout << endl;
    return 0;
}

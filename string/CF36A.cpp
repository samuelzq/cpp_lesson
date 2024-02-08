/**
 *
 * @File:   CF36A.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-02-05
 *
 */
#include <iostream>

using namespace std;

int main(void)
{
    string str;
    int n, l, g, i;

    cin >> n >> str;
    l = g = 0;

    for (i = 0; i < n; i++)
    {
        if (str[i] == '1')
        {
            l = i;
            break;
        }
    }

    for (; i < n; i++)
    {
        if (str[i] == '1')
        {
            if (g != 0)
            {
                if (g != (i - l))
                {
                    cout << "NO" << endl;
                    return 0;
                }
            }
            else
            {
                g = i - l;
            }
            l = i;

        }
    }

    cout << "YES" << endl;
    return 0;
}

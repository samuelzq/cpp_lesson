/**
 * https://www.luogu.com.cn/problem/AT_abc043_b
 *
 * @File:   AT_abc043_b.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-01-28
 *
 */
#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    int i;
    char c;
    char str[64] = {0};

    i = -1;
    while (cin >> c)
    {
        if (c != 'B')
        {
            i++;
            str[i] = c;
        }
        else
        {
            if (i >= 0)
            {
                str[i] = 0;
                i--;
            }
        }
    }
    cout << str << endl;
    return 0;
}

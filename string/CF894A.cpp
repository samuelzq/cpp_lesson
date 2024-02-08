/**
 * https://www.luogu.com.cn/problem/CF894A
 *
 * @File:   CF894A.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-02-05
 *
 */
#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    int p, l, c;
    string str;

    cin >> str;
    c = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == 'A')
        {
            p = l = 0;
            for (int j = i - 1; j >= 0; j--)
            {
                if (str[j] == 'Q')
                    p++;
            }

            for (int j = i + 1; j < str.length(); j++)
            {
                if (str[j] == 'Q')
                    l++;
            }
            c += p * l;
        }
    }
    cout << c << endl;
    return 0;
}

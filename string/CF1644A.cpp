/**
 * https://www.luogu.com.cn/problem/CF1644A
 *
 * @File:   CF1644A.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-02-06
 *
 */
#include <iostream>
#include <string>

using namespace std;

int k[26];

int main(void)
{
    int n;
    string str;

    cin >> n;
    while (n--)
    {
        bool o = true;
        cin >> str;

        for (char c : str)
        {
            if (isupper(c))
            {
                if (!k[c - 'A'])
                {
                    o = false;
                    break;
                }
            }
            else
            {
                k[c - 'a'] = 1;
            }
        }
        k['R' - 'A'] = k['G' - 'A'] = k['B' - 'A'] = 0;
        if (o)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}

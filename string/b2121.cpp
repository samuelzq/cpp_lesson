/**
 * https://www.luogu.com.cn/problem/B2121
 *
 * @File:   b2121.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-02-04
 *
 */
#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    string mins, maxs, str, tmp;
    int minl, maxl;

    getline(cin, str);

    maxl = 0;
    minl = 10000;
    for (char c : str)
    {
        if (c == ' ' || c == ',' || c == '.')
        {
            if (tmp.length() > maxl)
            {
                maxs = tmp;
                maxl = maxs.length();
            }

            if (tmp.length() < minl)
            {
                mins = tmp;
                minl = mins.length();
            }
            tmp.clear();
        }
        else
            tmp += c;
    }

    if (!tmp.empty())
    {
        if (tmp.length() > maxl)
        {
            maxs = tmp;
            maxl = maxs.length();
        }

        if (tmp.length() < minl)
        {
            mins = tmp;
            minl = mins.length();
        }
        tmp.clear();
    }
    cout << maxs << endl;
    cout << mins << endl;
    return 0;
}

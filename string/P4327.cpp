/**
 * https://www.luogu.com.cn/problem/P4327
 *
 * @File:   P4327.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-02-08
 *
 */
#include <bits/stdc++.h>

using namespace std;

const string stra[5] =
{"..#..",
 ".#.#.",
 "#.x.#",
 ".#.#.",
 "..#.."};

const string strb[5] =
{"..*..",
 ".*.*.",
 "*.x.*",
 ".*.*.",
 "..*.."};

int main(void)
{
    int i;
    string out[5];
    string s;

    cin >> s;

    i = 1;
    for (char c : s)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i > 1)
                out[j].pop_back();
            if (i % 3 == 0)
                out[j] += strb[j];
            else
                out[j] += stra[j];

            if (j == 2)
            {
                *(out[j].rbegin() + 2) = c;
                if (i > 1 && i % 3 == 1)
                    *(out[j].rbegin() + 4) = '*';
            }
        }
        i++;
    }

    for (i = 0; i < 5; i++)
        cout << out[i] << endl;
    return 0;
}

/**
 * https://www.luogu.com.cn/problem/CF987A
 *
 * @File:   CF987A.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-02-08
 *
 */
#include <bits/stdc++.h>

using namespace std;

struct {
    string stone;
    string color;
    bool exist;
} gem[6] = {
    {"Power", "purple", 0},
    {"Time", "green", 0},
    {"Space", "blue", 0},
    {"Soul", "orange", 0},
    {"Reality", "red", 0},
    {"Mind", "yellow", 0},
};

int main(void)
{
    int n;
    string str;

    cin >> n;
    cout << 6 - n << endl;
    while (n--)
    {
        int i;
        cin >> str;

        for (i = 0; i < 6; i++)
        {
            if (gem[i].color == str)
            {
                gem[i].exist = true;
                break;
            }
        }
    }

    for (int i = 0; i < 6; i++)
    {
        if (!gem[i].exist)
        {
            cout << gem[i].stone << endl;
        }
    }
    return 0;
}

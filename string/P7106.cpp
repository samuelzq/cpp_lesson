/**
 * https://www.luogu.com.cn/problem/P7106
 *
 * @File:   P7106.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-02-09
 *
 */
#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int d;
    string s;

    cin >> s;
    cout << '#';
    for (int i = 1; i <= 3; i++)
    {
        d = 0;
        if (isdigit(s[2 * i - 1]))
            d = s[2 * i - 1] - '0';
        else
            d = s[2 * i - 1] - 'A' + 10;
        d *= 16;
        if (isdigit(s[2 * i]))
            d += s[2 * i] - '0';
        else
            d += s[2 * i] - 'A' + 10;

        cout << hex << uppercase << setw(2) << setfill('0') << 0xff - d;
    }
    cout << endl;
    return 0;
}

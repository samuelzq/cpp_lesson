/**
 * https://www.luogu.com.cn/problem/CF656F
 *
 * @File:   CF656F.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-02-09
 *
 */
#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int sum;
    string s;

    sum = 0;
    cin >> s;
    for (char c : s)
    {
        if (c == 'A')
            sum += 1;
        else if (c == '1')
            sum += 10;
        else
            sum += c - '0';
    }
    cout << sum << endl;
    return 0;
}

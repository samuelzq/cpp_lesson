/**
 * https://www.luogu.com.cn/problem/AT_joi2022_yo1b_c
 *
 * @File:   AT_joi2022_yo1b_c.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-02-09
 *
 */
#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int n;
    string s;

    cin >> n >> s;

    for (int i = 1; i < n; i++)
    {
        if (s[i] == 'J')
            cout << s[i - 1] << endl;
    }
    return 0;
}

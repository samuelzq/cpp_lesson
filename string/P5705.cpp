/**
 * https://www.luogu.com.cn/problem/P5705
 *
 * @File:   P5705.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-02-09
 *
 */
#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    string s;

    cin >> s;

    for (int i = s.length() - 1; i >= 0; i--)
        cout << s[i];

    cout << endl;
    return 0;
}

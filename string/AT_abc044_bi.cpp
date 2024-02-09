/**
 * https://www.luogu.com.cn/problem/AT_abc044_b
 *
 * @File:   AT_abc044_bi.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-02-09
 *
 */
#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int b = 0;
    string s;

    cin >> s;
    for (char c : s)
    {
        b ^= 1 << (c - 'a');
    }
    cout << (b ? "No" : "Yes") << endl;
    return 0;
}

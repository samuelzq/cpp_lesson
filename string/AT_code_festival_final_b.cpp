/**
 * https://www.luogu.com.cn/problem/AT_code_festival_final_b
 *
 * @File:   AT_code_festival_final_b.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-02-06
 *
 */
#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int res, i;
    string str;

    cin >> str;
    res = i = 0;
    for (char c : str)
    {
        if (i++ % 2 == 0)
            res += c - '0';
        else
            res -= c - '0';
    }
    cout << res << endl;
    return 0;
}

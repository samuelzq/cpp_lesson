/**
 * https://www.luogu.com.cn/problem/AT_dwacon2018_prelims_a
 *
 * @File:   AT_dwacon2018_prelims_a.cpp
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

    if (s[0] == s[2] && s[1] == s[3])
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}

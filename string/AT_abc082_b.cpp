/**
 * https://www.luogu.com.cn/problem/AT_abc082_b
 *
 * @File:   AT_abc082_b.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-02-06
 *
 */
#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    string s1, s2;

    cin >> s1 >> s2;

    sort(s1.begin(), s1.end());
    sort(s2.rbegin(), s2.rend());
    if (s1 < s2)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}

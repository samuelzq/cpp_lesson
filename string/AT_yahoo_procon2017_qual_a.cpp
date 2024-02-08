/**
 * https://www.luogu.com.cn/problem/AT_yahoo_procon2017_qual_a
 *
 * @File:   AT_yahoo_procon2017_qual_a.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-02-07
 *
 */
#include <bits/stdc++.h>

using namespace std;

int a[26] = {0};

int main(void)
{
    string str;

    cin >> str;

    for (char c : str)
        a[c - 'a']++;

    if (a['a' - 'a'] == 1 && a['y' - 'a'] == 1 && a['h' - 'a'] == 1 && a['o' - 'a'] == 2)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}

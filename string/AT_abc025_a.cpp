/**
 * https://www.luogu.com.cn/problem/AT_abc025_a
 *
 * @File:   AT_abc025_a.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-02-09
 *
 */
#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int n, i, r;
    string s;

    cin >> s >> n;
    i = (n - 1)/ 5;
    r = (n - 1) % 5;

    cout << s[i] << s[r] << endl;
    return 0;
}

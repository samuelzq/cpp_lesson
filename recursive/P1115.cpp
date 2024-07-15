/**
 * https://www.luogu.com.cn/problem/P1115
 *
 * @File:   P1115.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-06-21
 *
 */
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n, c, s;

    cin >> n;

    cin >> s;
    c = s;
    while (--n) {
        int t;

        cin >> t;
        c += t;
        s = max(s, c);
        if (c < 0)
            c = 0;

    }
    cout << s << endl;
    return 0;
}


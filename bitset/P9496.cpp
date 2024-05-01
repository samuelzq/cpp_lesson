/**
 * https://www.luogu.com.cn/problem/P9496
 *
 * @File:   P9496.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-04-14
 *
 */
#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int t;

    cin >> t;

    while (t--) {
        long long n, m, s;
        int out = 0;
        cin >> n >> m;
        s = n ^ m;

        if (s == 0) {
            out = 0;
        } else {
            while (s) {
                if (s & 1) {
                    if (n & 1)
                        out |= 1;
                    else
                        out |= 2;
                }
                s >>= 1;
                n >>= 1;
            }
        }
        if (out == 3)
            cout << 2 << endl;
        else if (!out)
            cout << 0 << endl;
        else
            cout << 1 << endl;
    }
    return 0;
}

/**
 * https://www.luogu.com.cn/problem/CF1688A
 *
 * @File:   CF1688A.cpp
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
        int x, n;

        cin >> x;

        if (x == 1)
            cout << 3;
        else if (x & 1)
            cout << 1;
        else {
            n = 0;
            while (!(x & 1)) {
                n++;
                x >>= 1;
            }
            if (x == 1)
                cout << (1 << n) + 1;
            else
                cout << (1 << n);
        }
        cout << endl;
    }
    return 0;
}

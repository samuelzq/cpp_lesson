/**
 *
 * @File:   CF1722G.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-04-19
 *
 */
#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int t;

    cin >> t;

    while (t--) {
        int n, w;

        cin >> n;
        w = 0;
        for (int i = 1; i < n - 2; i++) {
            cout << i << ' ';
            w ^= i;
        }

        cout << (1 << 22) << ' ' << (1 << 23) << ' ' << (w ^ (1 << 22) ^ (1 << 23)) << endl;
    }
    return 0;
}

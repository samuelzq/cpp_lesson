/**
 *
 * @File:   CF276D.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-04-19
 *
 */
#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long l, r, m, cnt;

    cin >> l >> r;

    if (l == r) {
        cout << 0 << endl;
    } else {
        cnt = 0;
        m = l ^ r;
        while (m) {
            cnt++;
            m >>= 1;
        }
        cout << (1UL << cnt) - 1 << endl;
    }
    return 0;
}

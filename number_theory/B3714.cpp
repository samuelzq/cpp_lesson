/**
 * https://www.luogu.com.cn/problem/B3715
 *
 * @File:   B3714.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-06-02
 *
 */
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int t;

    cin >> t;

    while (t--) {
        long long n, m;
        cin >> n;
        m = n;
        for (long long i = 2; i * i <= m; i++) {
            while (n % i == 0) {
                cout << i << ' ';
                n /= i;
            }
        }

        if (n > 1)
            cout << n;
        cout << endl;
    }
    return 0;
}

/**
 * https://www.luogu.com.cn/problem/P8754
 *
 * @File:   P8754.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-06-03
 *
 */
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    long long n, d, x, t;

    cin >> n;

    d = 2;
    x = 1;
    t = 0;

    for (d = 2; d * d < n; d++) {
        if (n % d)
            continue;
        t = 0;
        while (n % d == 0) {
            n /= d;
            t++;
        }
        if (t & 1)
            x *= d;
    }
    cout << x * n << endl;
    return 0;
}

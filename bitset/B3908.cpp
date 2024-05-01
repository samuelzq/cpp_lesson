/**
 * https://www.luogu.com.cn/problem/B3908
 *
 * @File:   B3908.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-04-14
 *
 */
#include <bits/stdc++.h>

using namespace std;


int main(void)
{
    long long n, x;

    cin >> n >> x;

    while (--n) {
        long long a;
        cin >> a;
        x ^= a;
    }
    cout << x << ' ' << 0 << endl;
    return 0;
}

/**
 * https://www.luogu.com.cn/problem/P1226
 *
 * @File:   P1226.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-06-14
 *
 */
#include <bits/stdc++.h>
using namespace std;

#define LL long long

LL fastPower(LL a, LL b, LL mod)
{
    if (b == 0)
        return 1;

    LL res = fastPower(a, b / 2, mod);

    if (b & 1)
        return (res * res % mod) * a % mod;
    else
        return (res * res) % mod;
}

int main(void)
{
    LL a, b, p;

    cin >> a >> b >> p;

    cout << a << '^' << b << " mod " << p << '=' << fastPower(a, b, p);
    return 0;
}

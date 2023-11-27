/**
 * https://www.luogu.com.cn/problem/B2032
 *
 * @File:   b2032.cpp
 * @Author: Lao Zhang samuelzhang77@yahoo.com
 * @Date:   2023-11-12
 *
 */
#include <iostream>

int main(void)
{
    long long a1, a2, n, d, out;

    scanf("%lld %lld %lld", &a1, &a2, &n);

    d = a2 - a1;
    out = a1;
    for (int i = 1; i < n; i++)
        out += d;
    printf("%lld\n", out);
    return 0;
}

/**
 * https://www.luogu.com.cn/problem/P5534
 *
 * @File:   p5534.cpp
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
    out = 0;
    for (int i = 0; i < n; i++)
        out += i * d + a1;
    printf("%lld\n", out);
    return 0;
}

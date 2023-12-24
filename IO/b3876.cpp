/**
 * https://www.luogu.com.cn/problem/B3876
 *
 * @File:   b3876.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2023-12-17
 *
 */
#include <iostream>

int main(void)
{
    unsigned long long n;

    scanf("%lld", &n);

    if (n % 2)
        printf("%lld\n", (n + 1) / 2);
    else
        printf("%lld\n", n + 1);
    return 0;
}

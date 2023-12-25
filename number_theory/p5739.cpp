/**
 * https://www.luogu.com.cn/problem/P5739
 *
 * @File:   p5739.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2023-12-24
 *
 */
#include <iostream>

long long int f(int i)
{
    if (i == 1)
        return i;

    return i * f(i - 1);
}

int main(void)
{
    int n;

    scanf("%d", &n);
    printf("%lld", f(n));
    return 0;
}

/**
 * https://www.luogu.com.cn/problem/b2073
 *
 * @File:   b2073.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2023-12-17
 *
 */
#include <iostream>

int main(void)
{
    int a, b, n, r;

    scanf("%d %d %d", &a, &b, &n);

    r = 0;
    if (a % b != 0)
    {
        while (n--)
        {
            a *= 10;
            r = a / b;
            a = a % b;
        }
    }
    printf("%d\n", r);
    return 0;
}

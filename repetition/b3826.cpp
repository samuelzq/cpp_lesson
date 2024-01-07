/**
 * https://www.luogu.com.cn/problem/B3826
 *
 * @File:   b3826.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-01-07
 *
 */
#include <iostream>

int main(void)
{
    int n, t;

    scanf("%d", &n);
    t = 0;
    while (n--)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        if (b == 1)
            t += a;
        else
            t += 10;
    }
    printf("%d\n", t);
    return 0;
}

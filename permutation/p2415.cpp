/**
 * https://www.luogu.com.cn/problem/P2415
 *
 * @File:   p2415.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2023-12-25
 *
 */
#include <iostream>

int main(void)
{
    int i, a;
    long long s;

    i = 0;
    s = 0;
    while (scanf("%d", &a) != EOF)
    {
        s += a;
        i++;
    }
    for (int j = 0; j < i - 1; j++)
        s *= 2;
    printf("%lld\n", s);
    return 0;
}

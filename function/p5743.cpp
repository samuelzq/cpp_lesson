/**
 * https://www.luogu.com.cn/problem/P5743
 *
 * @File:   p5743.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2023-12-25
 *
 */
#include <iostream>

int b(int d)
{
    if (d == 1)
        return 1;
    return (b(d - 1)  + 1) * 2;
}

int main(void)
{
    int n;

    scanf("%d", &n);
    printf("%d\n", b(n));
    return 0;
}

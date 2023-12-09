/**
 * https://www.luogu.com.cn/problem/P5715
 *
 * @File:   p5715.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2023-12-08
 *
 */
#include <iostream>

using namespace std;

int main(void)
{
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    if (a <= b && b <= c && a <= c)
        printf("%d %d %d\n", a, b, c);
    else if (a <= b && b > c && a <= c)
        printf("%d %d %d\n", a, c, b);
    else if (b <= a && a <= c && b <= c)
        printf("%d %d %d\n", b, a, c);
    else if (b <= a && c <= a && b <= c)
        printf("%d %d %d\n", b, c, a);
    else if (c <= a && c <= b && b <= a)
        printf("%d %d %d\n", c, b, a);
    else
        printf("%d %d %d\n", c, a, b);
    return 0;
}

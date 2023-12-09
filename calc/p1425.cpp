/**
 * https://www.luogu.com.cn/problem/P1425
 *
 * @File:   p1425.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2023-12-08
 *
 */
#include <iostream>

using namespace std;

int main(void)
{
    int a, b, c, d, e, f;

    scanf("%d %d %d %d", &a, &b, &c, &d);

    e = c - a;
    f = d - b;

    while (f < 0)
    {
        e--;
        f += 60;
    }
    printf("%d %d\n", e, f);
    return 0;
}

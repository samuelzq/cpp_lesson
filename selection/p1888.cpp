/**
 * https://www.luogu.com.cn/problem/P1888
 *
 * @File:   p1888.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2023-12-08
 *
 */
#include <iostream>

using namespace std;

int gcd(int a, int b)
{
    if (!(a % b))
        return b;

    return gcd(b, a % b);
}

int main(void)
{
    int a, b, c;
    int e, f, g;

    scanf("%d %d %d", &a, &b, &c);

    if (a < b && b < c)
    {
        e = a;
        f = c;
    }
    else if (a < b && a < c)
    {
        e = a;
        f = b;
    }
    else if (b < a && a < c)
    {
        e = b;
        f = c;
    }
    else if (b < a && b < c)
    {
        e = b;
        f = a;
    }
    else if (c < a && a < b)
    {
        e = c;
        f = b;
    }
    else
    {
        e = c;
        f = a;
    }

    g = gcd(f, e);
    printf("%d/%d\n", e / g, f / g);
    return 0;
}

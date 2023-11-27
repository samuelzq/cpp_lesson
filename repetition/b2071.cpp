/**
 * https://www.luogu.com.cn/problem/B2071
 *
 * @File:   b2071.cpp
 * @Author: Lao Zhang samuelzhang77@yahoo.com
 * @Date:   2023-11-12
 *
 */
#include <iostream>

using namespace std;

int main(void)
{
    int a, b, c, d, x;

    scanf("%d %d %d", &a, &b, &c);

    if (a > b)
        d = b;
    else
        d = a;

    if (d > c)
        d = c;

    for (x = 2; x <= d; x++)
    {
        if ((a % x == b % x) && (b % x == c %x))
            break;
    }
    printf("%d\n", x);
    return 0;
}

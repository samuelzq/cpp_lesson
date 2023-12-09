/**
 * https://www.luogu.com.cn/problem/P1424
 *
 * @File:   p1424.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2023-12-08
 *
 */
#include <iostream>

using namespace std;

int main(void)
{
    int x, n;
    unsigned long long l;

    scanf("%d %d", &x, &n);

    if (x < 6)
        l = (6 - x) * 250;
    else
        l = 0;
    n -= (8 - x);

    l += n / 7 * 5 * 250;
    if (n % 7 > 5)
        l += 1250;
    else
        l += (n % 7) * 250;

    printf("%llu\n", l);
    return 0;
}

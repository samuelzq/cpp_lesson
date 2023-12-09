/**
 * https://www.luogu.com.cn/problem/P1423
 *
 * @File:   p1423.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2023-12-03
 *
 */
#include <iostream>

using namespace std;

int main(void)
{
    double s, t;
    int i;

    scanf("%lf", &s);
    t = 2.0;
    i = 0;
    while (s > 0.0000006)
    {
        s -= t;
        t *= 0.98;
        i++;
    }
    printf("%d\n", i);
    return 0;
}

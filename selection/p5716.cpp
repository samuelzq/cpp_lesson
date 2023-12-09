/**
 * https://www.luogu.com.cn/problem/P5716
 *
 * @File:   p5716.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2023-12-08
 *
 */
#include <iostream>

using namespace std;

int mon[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main(void)
{
    int y, m, d;

    scanf("%d %d", &y, &m);
    d = mon[m];

    if (!(y % 400) || (!(y % 4) && (y % 100)))
        d++;

    printf("%d\n", d);
    return 0;
}

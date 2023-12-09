/**
 * https://www.luogu.com.cn/problem/P1909
 *
 * @File:   p1909.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2023-12-08
 *
 */
#include <iostream>

using namespace std;

int main(void)
{
    int n, sum;
    int c, p;

    scanf("%d", &n);

    scanf("%d %d", &c, &p);
    sum = (n + c - 1) / c * p;

    scanf("%d %d", &c, &p);
    sum = min((n + c - 1) / c * p, sum);

    scanf("%d %d", &c, &p);
    sum = min((n + c - 1) / c * p, sum);

    printf("%d\n", sum);
    return 0;
}

/**
 * https://www.luogu.com.cn/problem/B2013
 *
 * @File:   B2013.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-05-01
 *
 */
#include <cstdio>

int main(void)
{
    double f;
    double c;

    scanf("%lf", &f);
    c = 5 * (f - 32) / 9;
    printf("%.5lf\n", c);
    return 0;
}

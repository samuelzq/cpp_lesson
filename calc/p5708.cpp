/**
 * https://www.luogu.com.cn/problem/P5708
 *
 * @File:   p5708.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2023-12-08
 *
 */
#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
    double a, b, c;
    double p;

    scanf("%lf %lf %lf", &a, &b, &c);
    p = (a + b + c) / 2.0;
    printf("%.1lf\n", sqrt(p * (p - a) * (p - b) * (p - c)));
    return 0;
}

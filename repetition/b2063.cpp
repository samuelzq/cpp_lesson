/**
 * https://www.luogu.com.cn/problem/B2063
 *
 * @File:   b2063.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2023-11-18
 *
 */
#include <iostream>

using namespace std;

int main(void)
{
    double x;
    int n;

    scanf("%lf %d", &x, &n);

    while (n--)
    {
        x *= 1.001;
    }
    printf("%.4lf\n", x);
    return 0;
}

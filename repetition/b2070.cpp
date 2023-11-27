/**
 * https://www.luogu.com.cn/problem/B2070
 *
 * @File:   b2070.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2023-11-25
 *
 */
#include <iostream>

using namespace std;

int main(void)
{
    int n, r;
    double s = 0;

    scanf("%d", &n);

    r = -1;
    for (int i = 1; i <= n; i++)
    {
        r = r * -1;
        s += r / (i * 1.0);
    }
    printf("%.04lf\n", s);
    return 0;
}

/**
 * https://www.luogu.com.cn/problem/P1035
 *
 * @File:   p1035.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2023-11-19
 *
 */
#include <iostream>

using namespace std;

int main(void)
{
    int k, n;
    double s, t;

    scanf("%d", &k);

    t = k * 1.0;
    n = 0;
    s = 0;
    while (s - t < 0.0000001)
    {
        n++;
        s += 1.0 / (double)n;
    }
    printf("%d\n", n);
    return 0;
}

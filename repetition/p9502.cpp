/**
 * https://www.luogu.com.cn/problem/P9502
 *
 * @File:   p9502.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2023-11-25
 *
 */
#include <iostream>

using namespace std;

int main(void)
{
    int n, m, r;

    scanf("%d", &n);

    if (n <= 4)
    {
        m = 0;
    }
    else
    {
        r = 1;
        m = 0;
        while (r * 4 < n)
        {
            m += 2;
            r *= 4;
        }
    }

    printf("%d\n", m);
}

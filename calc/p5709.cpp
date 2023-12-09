/**
 * https://www.luogu.com.cn/problem/P5709
 *
 * @File:   p5709.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2023-12-08
 *
 */
#include <iostream>

using namespace std;

int main(void)
{
    int m, t, s;

    scanf("%d %d %d", &m, &t, &s);

    if (t == 0)
    {
        m = 0;
    }
    else
    {
        int n;
        n = s / t;
        m -= n;
        if (s % t)
            m--;
        if (m < 0)
            m = 0;
    }

    printf("%d\n", m);
    return 0;
}

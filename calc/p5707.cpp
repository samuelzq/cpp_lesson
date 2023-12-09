/**
 * https://www.luogu.com.cn/problem/P5707
 *
 * @File:   p5707.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2023-12-08
 *
 */
#include <iostream>

using namespace std;

int main(void)
{
    int s, v, t, h, m;

    scanf("%d %d", &s, &v);

    t = s / v + 10;
    if (s % v)
        t++;

    h = 8;
    m = 0;
    while (t >= 60)
    {
        t -= 60;
        h--;
    }
    if (t > 0)
    {
        h--;
        m = 60 - t;
    }

    if (h < 0)
        h += 24;
    printf("%02d:%02d\n", h, m);
    return 0;
}

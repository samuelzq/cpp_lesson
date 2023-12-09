/**
 * https://www.luogu.com.cn/problem/P1089
 *
 * @File:   P1069.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2023-12-03
 *
 */
#include <iostream>

using namespace std;

int main(void)
{
    int s, l, m, i, n;

    l = s = m = 0;
    for (i = 1; i <= 12; i++)
    {
        scanf("%d", &n);
        l = l + 300 - n;
        if (l < 0) {
            m = i;
            i++;
            break;
        }
        s += l / 100 * 100;
        l = l % 100;
    }

    for (; i <= 12; i++)
        scanf("%d", &n);
    if (m)
        printf("-%d\n", m);
    else
        printf("%d\n", s * 120 / 100 + l);
    return 0;
}

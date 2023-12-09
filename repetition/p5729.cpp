/**
 * https://www.luogu.com.cn/problem/P5729
 *
 * @File:   p5729.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2023-11-28
 *
 */
#include <bits/stdc++.h>

using namespace std;

int a[22][22][22];

int main(void)
{
    int w, x, h, q, cnt;

    scanf("%d %d %d %d", &w, &x, &h, &q);
    memset(a, 0, sizeof(a));

    while (q--)
    {
        int x1, x2, y1, y2, z1, z2;
        scanf("%d %d %d %d %d %d", &x1, &y1, &z1, &x2, &y2, &z2);

        for (int i = x1; i <= x2; i++)
            for (int j = y1; j <= y2; j++)
                for (int k = z1; k <= z2; k++)
                    a[i][j][k] = 1;

        cnt = 0;

    }
    for (int i = 1; i <= w; i++)
    {
        for (int j = 1; j <= x; j++)
        {
            for (int k = 1; k <= h; k++)
            {
                if (a[i][j][k] != 1)
                    cnt++;
            }
        }
    }
    printf("%d\n", cnt);
    return 0;
}

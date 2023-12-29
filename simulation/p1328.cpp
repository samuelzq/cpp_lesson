/**
 * https://www.luogu.com.cn/problem/p1328
 *
 * @File:   p1328.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2023-12-28
 *
 */
#include <iostream>

int g[5][5] =
{
    {0, -1, 1, 1, -1},
    {1, 0, -1, 1, -1},
    {-1, 1, 0, -1, 1},
    {-1, -1, 1, 0, 1},
    {1, 1, -1, -1, 0},
};

int na[202], nb[202];

int main(void)
{
    int n, a, b, j, k, x, y;

    scanf("%d %d %d", &n, &a, &b);

    for (int i = 0; i < a; i++)
        scanf("%d", &na[i]);

    for (int i = 0; i < b; i++)
        scanf("%d", &nb[i]);

    j = k = x = y = 0;
    for (int i = 0; i < n; i++)
    {
        if (g[na[j]][nb[k]] == 1)
            x++;
        if (g[na[j]][nb[k]] == -1)
            y++;
//        printf("%d--%d .  %d:%d",na[j], nb[k], x,y);
        j = (j + 1) % a;
        k = (k + 1) % b;
    }
    printf("%d %d\n", x, y);
    return 0;
}

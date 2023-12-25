/**
 * https://www.luogu.com.cn/problem/P2670
 *
 * @File:   p2670.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2023-12-25
 *
 */
#include <iostream>

char c[102][102];

int getb(int x, int y)
{
    int b = 0;

    if (c[x - 1][y - 1] == '*')
        b++;
    if (c[x - 1][y] == '*')
        b++;
    if (c[x - 1][y + 1] == '*')
        b++;
    if (c[x][y - 1] == '*')
        b++;
    if (c[x][y + 1] == '*')
        b++;
    if (c[x + 1][y + 1] == '*')
        b++;
    if (c[x + 1][y] == '*')
        b++;
    if (c[x + 1][y - 1] == '*')
        b++;
    return b;
}

int main(void)
{
    int n, m;

    scanf("%d %d", &n, &m);

    for (int i = 1; i <= n; i++)
            scanf("%s", &c[i][1]);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (c[i][j] == '*')
                continue;
            c[i][j] = '0' + getb(i, j);
        }
    }

    for (int i = 1; i <= n; i++)
            printf("%s\n", &c[i][1]);
    return 0;
}

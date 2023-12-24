/**
 * https://www.luogu.com.cn/problem/P1789
 *
 * @File:   p1789.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2023-12-11
 *
 */
#include <iostream>

char a[106][106];

int main(void)
{
    int n, m, k, cnt;

    scanf("%d %d %d", &n, &m, &k);

    for (int i = 1; i <= m; i++)
    {
        int x, y;
        scanf("%d %d", &x, &y);
        for (int j = x - 2; j <= x + 2; j++)
            a[j + 2][y + 2] = 1;
        for (int j = y - 2; j <= y + 2; j++)
            a[x + 2][j + 2] = 1;
        for (int j = x - 1; j <= x + 1; j++)
            for (int k = y - 1; k <= y + 1; k++)
                a[j + 2][k + 2] = 1;
    }

    for (int i = 1; i <= k; i++)
    {
        int x, y;
        scanf("%d %d", &x, &y);
        for (int j = x - 2; j <= x + 2; j++)
            for (int k = y - 2; k <= y + 2; k++)
                a[j + 2][k + 2] = 1;
    }

    cnt = 0;
    for (int i = 3; i <= n + 2; i++)
    {
        for (int j = 3; j <= n + 2; j++)
        {
            //printf("%d ", a[i][j]);
            if (a[i][j] == 0)
                cnt++;
        }
//printf("\n");
    }
    printf("%d\n", cnt);
    return 0;
}

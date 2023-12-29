/**
 * https://www.luogu.com.cn/problem/P4924
 *
 * @File:   p4924.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2023-12-28
 *
 */
#include <iostream>

using namespace std;

int a[505][505];
int b[505][505];

int main(void)
{
    int n, m;

    scanf("%d %d", &n, &m);

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            a[i][j] = (i - 1) * n + j;

    while (m--)
    {
        int x, y, r, z;
        int x1, y1;
        scanf("%d %d %d %d", &x, &y, &r, &z);

        x1 = x - r;
        y1 = y - r;
        if (z == 0)
        {
            for (int i = 0; i < 2 * r + 1; i++)
                for (int j = 2 * r; j >= 0; j--)
                    b[i][2 * r - j] = a[j + x1][i + y1];
        }
        else
        {
            for (int i = 2 * r; i >= 0; i--)
                for (int j = 0; j < 2 * r + 1; j++)
                    b[2 * r - i][j] = a[j + x1][i + y1];
        }
        for (int i = 0; i < 2 * r + 1; i++)
            for (int j = 0; j < 2 * r + 1; j++)
                a[x1 + i][y1 + j] = b[i][j];
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("%d\n", a[i][n]);
    }
    return 0;
}

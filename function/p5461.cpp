/**
 * https://www.luogu.com.cn/problem/P546
 *
 * @File:   p5461.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2023-12-24
 *
 */
#include <iostream>
#include <cstring>

int a[4096][4096];

int powof2(int n)
{
    if (n == 0)
        return 1;
    return 2 * powof2(n - 1);
}

void r(int x, int y, int l)
{
    if (l == 2)
    {
        a[x][y + 1] = 1;
        a[x + 1][y] = 1;
        a[x + 1][y + 1] = 1;
        return;
    }

    r(x + l / 2, y + l / 2, l / 2);
    r(x, y + l / 2, l / 2);
    r(x + l / 2, y, l / 2);
}

int main(void)
{
    int n;

    memset(a, 0, sizeof(a));
    scanf("%d", &n);
    n = powof2(n);
    r(0, 0, n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
            printf("%d ", a[i][j]);
        printf("%d\n", a[i][n - 1]);
    }
    return 0;
}

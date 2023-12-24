/**
 * https://www.luogu.com.cn/problem/P1319
 *
 * @File:   p1319.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2023-12-12
 *
 */
#include <iostream>

char a[202 * 202];

int main(void)
{
    int n, j, t;
    char c;

    scanf("%d", &n);

    c = 0;
    j = 0;

    while (scanf("%d", &t) != EOF)
    {
        while (t--)
            a[j++] = c;
        c = (c + 1) & 1;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            printf("%d", a[i * n + j]);
        printf("\n");
    }
    return 0;
}

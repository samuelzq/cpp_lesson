/**
 * https://www.luogu.com.cn/problem/P5731
 *
 * @File:   p5731.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2023-12-11
 *
 */
#include <iostream>

int a[10][10];

int main(void)
{
    int n, d;

    scanf("%d", &n);

    d = 1;
    for (int i = 0; i < (n + 1) / 2; i++)
    {
        for (int j = i; j < n - 1 - i; j++)
            a[i][j] = d++;
        for (int j = i; j < n - 1 - i; j++)
            a[j][n - 1 - i] = d++;
        for (int j = n - i - 1; j > i; j--)
            a[n - i - 1][j] = d++;
        for (int j = n - i - 1; j > i; j--)
            a[j][i] = d++;
    }

    if (n % 2)
        a[n / 2][n / 2] = d;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
            printf("%3d", a[i][j]);
        printf("%3d\n", a[i][n - 1]);
    }
    return 0;
}

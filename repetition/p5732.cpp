/**
 * https://www.luogu.com.cn/problem/P5732
 *
 * @File:   p5732.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2023-12-11
 *
 */
#include <iostream>

int a[22][22];

int main(void)
{
    int n;

    scanf("%d", &n);

    a[1][1] = 1;
    for (int i = 2; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
        }
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j < i; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("%d\n", a[i][i]);
    }
    return 0;
}

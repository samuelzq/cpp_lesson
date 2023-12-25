/**
 * https://www.luogu.com.cn/problem/P5738
 *
 * @File:   p5738.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2023-12-24
 *
 */
#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int a[102][22];

float avr(int n, int m)
{
    int sum, maxn, minx;

    sum = 0;
    maxn = minx = a[n][0];
    for (int i = 0; i < m; i++)
    {
        sum += a[n][i];
        maxn = max(maxn, a[n][i]);
        minx = min(minx, a[n][i]);
    }
    sum = sum - maxn - minx;

    return 1.0 * sum / (m - 2);
}

int main(void)
{
    int n, m;
    float out = 0;

    scanf("%d %d", &n, &m);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
        }
        out = max(avr(i, m), out);
    }
    printf("%.2f\n", out);
    return 0;
}

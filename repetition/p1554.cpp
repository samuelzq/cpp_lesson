/**
 * https://www.luogu.com.cn/problem/P1554
 *
 * @File:   p1554.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2023-11-28
 *
 */
#include <bits/stdc++.h>

using namespace std;

int a[12] = {0};

int main(void)
{
    int m, n;

    scanf("%d %d", &m, &n);
    for (int i = m; i <= n; i++)
    {
        int t = i;
        while (t)
        {
            a[t % 10]++;
            t /= 10;
        }
    }

    for (int i = 0; i < 9; i++)
        printf("%d ", a[i]);
    printf("%d\n", a[9]);
    return 0;
}

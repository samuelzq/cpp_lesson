/**
 * https://www.luogu.com.cn/problem/P1157
 *
 * @File:   p1157.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2023-12-31
 *
 */
#include <bits/stdc++.h>

int bitscheck(int a, int len)
{
    int l;

    l = 0;
    for (int i = 0; i < len; i++)
    {
        if (a & 1 << i)
            l++;
    }
    return l;
}

int main(void)
{
    int n, r;

    scanf("%d %d", &n, &r);

    for (int i = (1 << n) - 1; i >= (1 << r) - 1; i--)
    {
        if (bitscheck(i, n) != r)
            continue;
        for (int j = n - 1; j >= 0; j--)
        {
            if (i & 1 << j)
                printf("%3d", n - j);
        }
        printf("\n");
    }
    return 0;
}

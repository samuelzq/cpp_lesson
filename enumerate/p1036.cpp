/**
 * https://www.luogu.com.cn/problem/P1036
 *
 * @File:   p1036.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2023-12-31
 *
 */
#include <bits/stdc++.h>

int a[30];

int bitcheck(int a, int len)
{
    int cnt = 0;
    for (int i = 0; i < len; i++)
    {
        if (a & (1 << i))
            cnt++;
    }
    return cnt;
}

bool is_prime(int a)
{
    if (a == 2)
        return true;

    if (a == 1 || a % 2 == 0)
        return false;

    for (int i = 3; i * i <= a; i += 2)
    {
        if (a % i == 0)
            return false;
    }
    return true;
}

int main(void)
{
    int n, k, cnt = 0;

    scanf("%d %d", &n, &k);

    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (int i = 1; i < 1 << n; i++)
    {
        if (bitcheck(i, n) == k)
        {
            int s = 0;
            for (int j = 0; j < n; j++)
            {
                if (i & (1 << j))
                {
                    s += a[j];
                }
            }
            //printf("## %d\n", s);
            if (is_prime(s))
                cnt++;
        }
    }
    printf("%d\n", cnt);
    return 0;
}

/**
 * https://www.luogu.com.cn/problem/P1125
 *
 * @File:   p1125.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2023-12-14
 *
 */
#include <iostream>

char str[110];
int  d[26];

bool is_prime(int x)
{
    if (x == 2)
        return true;

    if (x < 2 || x % 2 == 0)
        return false;

    for (int i = 3; i * i < x; i += 2)
    {
        if (x % i == 0)
            return false;
    }

    return true;
}

int main(void)
{
    int maxn, minx, i;

    scanf("%s", str);
    i = 0;

    while (str[i])
    {
        int t = str[i] - 'a';
        d[t]++;
        i++;
    }
    maxn = 0;
    minx = 110;
    for (int j = 0; j < 26; j++)
    {
        if (maxn < d[j])
            maxn = d[j];
        if (d[j] && minx > d[j])
            minx = d[j];
    }

    i = maxn - minx;
    if (is_prime(i))
    {
        printf("Lucky Word\n%d\n", i);
    }
    else
    {
        printf("No Answer\n0\n");
    }
    return 0;
}

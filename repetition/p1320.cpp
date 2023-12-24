/**
 * https://www.luogu.com.cn/problem/P1320
 *
 * @File:   p1320.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2023-12-12
 *
 */
#include <iostream>

#include <cstdio>
int d[40020];

int main()
{
    int i = 1;
    char c;

    while (scanf("%c", &c) && c > 0x2F)
    {
        if (((i & 1) && (c - '0'== 1)) || (!(i & 1) && (c - '0' == 0)))
            i++;
        d[i]++;
        d[0]++;
    }

    while (scanf("%c", &c) != EOF)
    {
        if (c > 0x2F)
        {
            if (((i & 1) && (c - '0'== 1)) || (!(i & 1) && (c - '0' == 0)))
                i++;
            d[i]++;
        }
    }

    for (int j = 0; j < i; j++)
        printf("%d ", d[j]); // 输出存储好的压缩码
    printf("%d\n", d[i]); // 输出存储好的压缩码
    return 0;
}

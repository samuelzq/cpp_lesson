/**
 * https://www.luogu.com.cn/problem/P1045
 *
 * @File:   p1045.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2023-12-29
 *
 */
#include <iostream>
#include <cmath>

unsigned long long mas[600] = { 0 };

int main(void)
{
    int p, i, l;

    scanf("%d", &p);
    mas[0] = 1;
    l = log10(2) * p;
    printf("%d\n", l + 1);

    while (p > 0)
    {
        unsigned long long int c = 0;
        for (i = 0; i < 500; i++)
        {
            if (p > 30)
                mas[i] <<= 30;
            else
                mas[i] <<= p;
            mas[i] += c;
            c = mas[i] / 10;
            mas[i] %= 10;
        }
        p -= 30;
    }
    mas[0] -= 1;
    for (i = 499; i >= 0; i--)
    {
        putchar('0' + mas[i]);
        if (i % 50 == 0)
            printf("\n");
    }
    return 0;
}

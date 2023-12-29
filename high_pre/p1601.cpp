/**
 * https://www.luogu.com.cn/problem/P1601
 *
 * @File:   p1601.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2023-12-26
 *
 */
#include <iostream>
#include <cstring>

char ac[505];
char bc[505];
int a[100], b[100], c[100];
const int max_int = 1000000;

void big_add(int a[], int b[], int c[])
{
    int ca;
    ca = 0;
    for (int i = 0; i < 99; i++)
    {
        int s = a[i] + b[i] + ca;
        if (s >= max_int)
        {
            s -= max_int;
            ca = 1;
        }
        else
            ca = 0;
        c[i] = s;
    }
}

void print(int a[])
{
    int i;
    for (i = 99; i >= 0; i--)
    {
        if (a[i])
            break;
    }
    printf("%d", a[i]);

    for (i--; i >= 0; i--)
        printf("%06d", a[i]);
    printf("\n");
    return;
}

int power10(int n)
{
    int p = 1;

    for (int i = 0; i < n; i++)
        p *= 10;

    return p;
}

int main(void)
{
    int l, t, d, k;
    scanf("%s %s", ac, bc);

    l = strlen(ac);

    t = d = k = 0;
    for (int i = l - 1; i >= 0; i--)
    {
        t = t  + (ac[i] - '0') * power10(d);
        if (d++ == 5)
        {
            a[k++] = t;
            t = 0;
            d = 0;
        }
    }
    if (l % 6)
        a[k] = t;
    l = strlen(bc);
    t = d = k = 0;
    for (int i = l - 1; i >= 0; i--)
    {
        t = t  + (bc[i] - '0') * power10(d);
        if (d++ == 5)
        {
            b[k++] = t;
            t = 0;
            d = 0;
        }
    }
    if (l % 6)
        b[k] = t;
    big_add(a, b, c);
    print(c);
    return 0;
}

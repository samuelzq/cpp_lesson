/**
 * https://www.luogu.com.cn/problem/P1303
 *
 * @File:   p1303.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2023-12-28
 *
 */
#include <iostream>
#include <cstring>

using namespace std;

char n1[2010], n2[2010];
int a[5010], b[5010], c[5010];

void mutiply(int a[], int b[], int c[])
{

    for (int i = 0; i < 5001; i++)
    {
        for (int j = 0; j <= i; j++)
            c[i] += a[j] * b[i - j];

        c[i + 1] = c[i] / 10;
        c[i] = c[i] % 10;
    }
}

void print(int a[])
{
    int i;
    for (i = 5000; i > 0; i--)
    {
        if (a[i])
            break;
    }
    for (; i >= 0; i--)
        printf("%d", a[i]);
    printf("\n");
}

int main(void)
{
    int l;
    scanf("%s %s", n1, n2);

    l = strlen(n1);
    for (int i = 0; i < l; i++)
    {
        a[l - 1 - i] = n1[i] - '0';
    }

    l = strlen(n2);
    for (int i = 0; i < l; i++)
    {
        b[l - 1 - i] = n2[i] - '0';
    }
    mutiply(a, b, c);
    print(c);
    return 0;
}

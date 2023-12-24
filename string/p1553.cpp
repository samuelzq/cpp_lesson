/**
 * https://www.luogu.com.cn/problem/P1553
 *
 * @File:   p1553.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2023-12-21
 *
 */
#include <iostream>

char d[100];

int main(void)
{
    char c;
    int i = 1, j;

    c = getchar();
    while (c != '.' && c != '/' && c != '%' && c != EOF && c != '\n' && c != '\r')
    {
        d[i] = c;
        i++;
        c = getchar();
    }

    j = i - 1;
    while (d[j] == '0')
        j--;

    if (j == 0)
        printf("0");
    while (j)
        printf("%c", d[j--]);

    if (c != EOF)
        printf("%c", c);

    if (c == '%' || c == EOF)
    {
        printf("\n");
        return 0;
    }

    c = getchar();
    while (c == '0')
        c = getchar();

    i = 0;
    while (c != '\r' && c != '\n' && c != EOF)
    {
        d[i] = c;
        i++;
        c = getchar();
    }


    j = i - 1;
    while (d[j] == '0')
        j--;
    if (j < 0)
        printf("0");
    for (; j >= 0; j--)
        printf("%c", d[j]);
    printf("\n");
    return 0;
}

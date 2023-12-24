/**
 * https://www.luogu.com.cn/problem/P1308
 *
 * @File:   p1308.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2023-12-17
 *
 */
#include <iostream>
#include <string>

char str1[11];
char str2[1000006];

int main(void)
{
    int i, d, j, k, s;
    char c;

    i = 0;
    c = getchar();
    while (c != '\n' && c != '\r')
    {
        if (c >= 'A' && c <= 'Z')
            c = c - 'A' + 'a';
        str1[i] = c;
        c = getchar();
        i++;
    }

    while (c == '\n' || c == '\r')
        c = getchar();

    d = j = k = s = 0;
    while (1)
    {
        if (c != ' ' && c != EOF && c != '\n' && c != '\r')
        {
            if (c >= 'A' && c <= 'Z')
                c = c - 'A' + 'a';
            str2[j] = c;
            j++;
            c = getchar();
            continue;
        }
        str2[j] = 0;
   //     printf("%s\n", str2);
        if (j == i)
        {
            int n;
            for (n = 0; n < i; n++)
            {
                if (str1[n] != str2[n])
                    break;
            }
            if (n == i)
            {
                if (k == 0)
                {
   //                 printf("%s %s\n", str1, str2);
                    d = d + s;
                }
                k++;
            }
        }

        if (c == EOF)
            break;
        s = s + j + 1;
        j = 0;
        c = getchar();
 //       printf("%d\n", k);
    }

    if (k)
        printf("%d %d\n", k, d);
    else
        printf("-1\n");

    return 0;
}

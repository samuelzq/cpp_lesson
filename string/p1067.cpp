/**
 * https://www.luogu.com.cn/problem/P1098
 *
 * @File:   p1067.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2023-12-28
 *
 */
#include <iostream>

char o[20010];

int main(void)
{
    int cur, pre, p1, p2, p3;
    char c1, c2, c;

    scanf("%d %d %d", &p1, &p2, &p3);

    pre = cur = 0;
    c1 = c2 = 0;
    do
    {
        c = getchar();
    } while (c == '\n' || c == '\r');

    while (c != EOF)
    {
        if (c == '\n' || c == '\r')
        {
            c = getchar();
            continue;
        }
        o[cur] = c;
        if (c == '-' && cur > 0)
        {
            if (o[cur - 1] != '-')
                pre = cur;
            else
                pre = 0;
        }
        cur++;

        if (pre == 0)
        {
            c = getchar();
            continue;
        }

        if ('0' <= c && c <= '9')
        {
            if (!pre || (o[pre - 1] < '0' || o[pre - 1] > '9') || (c <= o[pre - 1]))
            {
                pre = 0;
                c = getchar();
                continue;
            }
            else
            {
                int k = c - o[pre - 1];
                if (p3 == 1)
                    c1 = o[pre - 1];
                else
                    c1 = c;
                for (int i = 1; i < k; i++)
                {
                    if (p3 == 1)
                        c1 += 1;
                    else
                        c1 -= 1;

                    if (p1 == 3)
                        c1 = '*';
                    for (int j = 0; j < p2; j++)
                        o[pre++] = c1;
                }
                o[pre++] = c;
                cur = pre;
                o[cur] = 0;
                pre = 0;
            }
        }
        else if ('a' <= c && c <= 'z')
        {
            if (!pre || (o[pre - 1] < 'a' || o[pre - 1] > 'z') || (c <= o[pre - 1]))
            {
                pre = 0;
                c = getchar();
                continue;
            }
            else
            {
                int k = c - o[pre - 1];

                if (p3 == 1)
                    c1 = o[pre - 1];
                else
                    c1 = c;

                if (p1 == 2)
                    c1 = c1 - 'a' + 'A';
                for (int i = 1; i < k; i++)
                {
                    if (p3 == 1)
                        c1 += 1;
                    else
                        c1 -= 1;

                    if (p1 == 3)
                        c1 = '*';
                    for (int j = 0; j < p2; j++)
                        o[pre++] = c1;
                }
                o[pre++] = c;
                cur = pre;
                o[cur] = 0;
                pre = 0;
            }
        }
        c = getchar();
    }
    printf("%s\n", o);
    return 0;
}

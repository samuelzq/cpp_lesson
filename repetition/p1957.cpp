/**
 * https://www.luogu.com.cn/problem/P1957
 *
 * @File:   p1957.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2023-12-15
 *
 */
#include <iostream>
#include <cstring>

using namespace std;

char str[1000];
char buf[1000];

int get_line(void)
{
    char c;
    int i = 0;

    c = getchar();
    while (c == '\r' || c == '\n')
        c = getchar();
    while (c != '\n' && c != '\r' && c != EOF)
    {
        buf[i++] = c;
        c = getchar();
    }
    buf[i] = 0;
    return i;
}

int main(void)
{
    int n, i;

    scanf("%d", &n);
    while (n--)
    {
        int p, j, a, b;
        get_line();
        j = i = 0;
        if (buf[0] == 'a')
        {
            p = 1;
            i = 2;
            j = 0;
            a = 0;
            while (buf[i] != ' ')
            {
                a = a * 10 + buf[i] - '0';
                str[j++] = buf[i++];
            }
            str[j++] = '+';
            b = 0;
            i++;
            while (buf[i])
            {
                b = b * 10 + buf[i] - '0';
                str[j++] = buf[i++];
            }
            sprintf(str + j, "=%d", a + b);
        }
        else if (buf[0] == 'b')
        {
            p = 2;
            i = 2;
            j = 0;
            a = 0;
            while (buf[i] != ' ')
            {
                a = a * 10 + buf[i] - '0';
                str[j++] = buf[i++];
            }
            str[j++] = '-';
            b = 0;
            i++;
            while (buf[i])
            {
                b = b * 10 + buf[i] - '0';
                str[j++] = buf[i++];
            }
            sprintf(str + j, "=%d", a - b);
        }
        else if (buf[0] == 'c')
        {
            p = 3;
            i = 2;
            j = 0;
            a = 0;
            while (buf[i] != ' ')
            {
                a = a * 10 + buf[i] - '0';
                str[j++] = buf[i++];
            }
            str[j++] = '*';
            b = 0;
            i++;
            while (buf[i])
            {
                b = b * 10 + buf[i] - '0';
                str[j++] = buf[i++];
            }
            sprintf(str + j, "=%d", a * b);
        }
        else
        {
            i = 0;
            j = 0;
            a = 0;
            while (buf[i] != ' ')
            {
                a = a * 10 + buf[i] - '0';
                str[j++] = buf[i++];
            }
            if (p == 1)
                str[j++] = '+';
            else if (p == 2)
                str[j++] = '-';
            else
                str[j++] = '*';
            b = 0;
            i++;
            while (buf[i])
            {
                b = b * 10 + buf[i] - '0';
                str[j++] = buf[i++];
            }
            if (p == 1)
                sprintf(str + j, "=%d", a + b);
            else if (p == 2)
                sprintf(str + j, "=%d", a - b);
            else
                sprintf(str + j, "=%d", a * b);
        }
        printf("%s\n%d\n", str, strlen(str));
    }
    return 0;
}

/**
 * https://www.luogu.com.cn/problem/AT_arc049_a
 *
 * @File:   AT_arc049_a.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-01-15
 *
 */
#include <cstdio>
#include <cstring>

char str[128];

int main(void)
{
    int l;
    int b, c, d, e;

    scanf("%s", str);
    l = strlen(str);
    scanf("%d %d %d %d", &b, &c, &d, &e);

    for (int i = 0; i < b; i++)
        putchar(str[i]);
    putchar('"');

    for (int i = b; i < c; i++)
        putchar(str[i]);
    putchar('"');

    for (int i = c; i < d; i++)
        putchar(str[i]);
    putchar('"');

    for (int i = d; i < e; i++)
        putchar(str[i]);
    putchar('"');

    for (int i = e; i < l; i++)
        putchar(str[i]);
    putchar('\n');

    return 0;
}

/**
 * https://www.luogu.com.cn/problem/B2123
 *
 * @File:   b2123.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-01-13
 *
 */
#include <cstdio>

int main(void)
{
    char c1, c2;
    int n;

    c2 = 0;
    n = 0;
    while (scanf("%c", &c1) != EOF)
    {
        if (c2 != c1)
        {
            if (c2 != 0)
                printf("%d%c", n, c2);
            c2 = c1;
            n = 1;
        }
        else
        {
            n++;
        }
    }
    printf("\n");
    return 0;
}

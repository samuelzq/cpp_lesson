/**
 * https://www.luogu.com.cn/problem/AT_abc042_b
 *
 * @File:   AT_abc019_2.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-01-14
 *
 */
#include <cstdio>
#include <cstring>

int main(void)
{
    char c1, c2;
    int n;

    c1 = 0;
    n = 0;

    while ((c2 = getchar()) != EOF)
    {
        if (c1 &&c1 != c2)
        {
            printf("%c%d", c1, n);
            n = 0;
        }
        c1 = c2;
        n++;
    }
    printf("\n");
    return 0;
}

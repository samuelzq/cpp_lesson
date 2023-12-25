/**
 * https://www.luogu.com.cn/problem/P1042
 *
 * @File:   p1042.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2023-12-25
 *
 */
#include <iostream>
#include <cstring>

char r[2510 * 30];

int main(void)
{
    int n, w, l, p;

    n = 0;
    while(scanf("%s", r + n) != EOF)
    {
        n = strlen(r);
    }

    w = l = 0;
    p = 0;
    while (r[p] != 'E')
    {
        if (r[p] == 'W')
            w++;
        if (r[p] == 'L')
            l++;
        if ( (w >= 11 || l >= 11) && abs(w - l) >= 2)
        {
            printf("%d:%d\n", w, l);
            w = l = 0;
        }
        p++;
    }
        printf("%d:%d\n", w, l);


    printf("\n");
    w = l = 0;
    p = 0;
    while (r[p] != 'E')
    {
        if (r[p] == 'W')
            w++;
        if (r[p] == 'L')
            l++;
        if ((w >= 21 || l >= 21) && abs(w - l) >= 2)
        {
            printf("%d:%d\n", w, l);
            w = l = 0;
        }
        p++;
    }
        printf("%d:%d\n", w, l);

    return 0;
}

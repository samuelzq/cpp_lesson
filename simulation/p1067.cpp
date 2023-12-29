/**
 * https://www.luogu.com.cn/problem/p1067
 *
 * @File:   p1067.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2023-12-28
 *
 */
#include <iostream>

int main(void)
{
    bool f = false;
    int n, p;

    scanf("%d", &n);

    for (int i = n; i >= 0; i--)
    {
        scanf("%d", &p);

        if (!p)
            continue;

        if (f == true && p > 0)
            printf("+");

        if (p != 1 && p != -1)
            printf("%d", p);
        else
        {
            if (i == 0)
                printf("%d", p);
            else if (p < 0)
                printf("-");
        }

        f = true;
        if (i > 1)
            printf("x^%d", i);
        else if (i == 1)
            printf("x");
    }
    if (f == false)
        printf("0\n");
    else
        printf("\n");
    return 0;
}

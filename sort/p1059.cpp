/**
 * https://www.luogu.com.cn/problem/p1059
 *
 * @File:   p1059.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2023-12-29
 *
 */
#include <iostream>

int a[1009] = {0};

int main(void)
{
    int n, cnt, f;

    scanf("%d", &n);
    cnt = 0;
    for (int i = 0; i < n; i++)
    {
        int t;
        scanf("%d", &t);
        if (a[t])
            continue;
        else
            a[t] = 1;
        cnt++;
    }

    printf("%d\n", cnt);
    f = 0;
    for (int i = 1; i <= 1000; i++)
    {
        if (a[i])
        {
            if (f)
                printf(" ");
            printf("%d", i);
            f = 1;
        }
    }
    printf("\n");
    return 0;
}

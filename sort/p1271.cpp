/**
 * https://www.luogu.com.cn/problem/p1271
 *
 * @File:   p1271.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2023-12-29
 *
 */
#include <iostream>

int cnt[1000] = {0};

int main(void)
{
    int n, m, f = 0;

    scanf("%d %d", &n, &m);

    for (int i = 0; i < m; i++)
    {
        int p;
        scanf("%d", &p);
        cnt[p]++;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < cnt[i]; j++)
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

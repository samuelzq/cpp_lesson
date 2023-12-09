/**
 * https://www.luogu.com.cn/problem/P2550
 *
 * @File:   p2550.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2023-11-28
 *
 */
#include <bits/stdc++.h>

using namespace std;

int a[40] = {0};
int c[40] = {0};
int b[8] = {0};

int main(void)
{
    int n, cnt;

    scanf("%d", &n);

    for (int i = 0; i < 7; i++)
    {
        int t;
        scanf("%d", &t);
        a[t] = 1;
    }

    cnt = 0;
    while (n--)
    {
        int t = 0;
        memset(c, 0, sizeof(c));
        for (int i = 0; i < 7; i++)
        {
            int m;
            scanf("%d", &m);
            if (a[m] && !c[m])
            {
                c[m] = 1;
                t++;
            }
        }
        b[t] += 1;
    }

    for (int i = 7; i > 1; i--)
        printf("%d ", b[i]);
    printf("%d\n", b[1]);
    return 0;
}

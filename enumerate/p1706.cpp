/**
 * https://www.luogu.com.cn/problem/P1706
 *
 * @File:   p1706.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-01-05
 *
 */
#include <bits/stdc++.h>

using namespace std;

#if 0
int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};

int main(void)
{
    int n;

    scanf("%d", &n);
    do
    {
        for (int i = 0; i < n; i++)
        {
            printf("%5d", a[i]);
        }
        printf("\n");
    } while (next_permutation(a, a + n));
    return 0;
}
#else

int a[10] = {0};
int p[10] = {0};
int n;

void dfs(int k)
{
    if (k > n)
    {
        for (int i = 1; i <= n; i++)
            printf("%5d", a[i]);
        printf("\n");
        return;
    }

    for (int i = 1; i <= n; i++)
    {
        if (p[i] == 0)
        {
            p[i] = 1;
            a[k] = i;
            dfs(k + 1);
            p[i] = 0;
            a[k] = 0;
        }
    }
    return;
}


int main(void)
{
    scanf("%d", &n);
    dfs(1);
    return 0;
}
#endif

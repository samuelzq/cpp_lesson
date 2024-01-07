/**
 * https://www.luogu.com.cn/problem/P2036
 *
 * @File:   p2036.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-01-07
 *
 */
#include <bits/stdc++.h>

using namespace std;

int n, minx = 0x7fffffff;
int s[20], b[20], c[20];

void dfs(int dep, int i, int st)
{
    int ss, bb;
    if (dep == st)
    {
        ss = 1;
        bb = 0;
        for (int j = 0; j < dep; j++)
        {
            ss *= s[c[j]];
            bb += b[c[j]];
       //     printf("%d ", c[j]);
        }
        minx = min(minx, abs(ss - bb));
       // printf("\ndep=%d, %d\n", dep, minx);
        return;
    }

    if (i >= n)
        return;

    c[st] = i;
    dfs(dep, i + 1, st + 1);
    dfs(dep, i + 1, st);
    return;
}
int main(void)
{
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d %d", &s[i], &b[i]);

    for (int i = 1; i <= n; i++)
        dfs(i, 0, 0);
    printf("%d\n", minx);
}

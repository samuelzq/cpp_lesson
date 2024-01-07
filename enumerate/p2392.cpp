/**
 * https://www.luogu.com.cn/problem/P2392
 *
 * @File:   p2392.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-01-07
 *
 */
#include <bits/stdc++.h>

using namespace std;

int a[24], b[24], c[24], d[24];
int r, l, mintime = 0x7fffffff;

void dfs(int a[], int dep, int s)
{
    if (s >= dep)
    {
        mintime = min(mintime, max(l, r));
        return;
    }

    l += a[s];
    dfs(a, dep, s + 1);
    l -= a[s];
    r += a[s];
    dfs(a, dep, s + 1);
    r -= a[s];
    return;
}

int main(void)
{
    int s1, s2, s3, s4;
    int t1, t2, t3, t4;

    scanf("%d %d %d %d", &s1, &s2, &s3, &s4);

    for (int i = 0; i < s1; i++)
        scanf("%d", &a[i]);
    dfs(a, s1, 0);
    t1 = mintime;
    mintime = 0x7fffffff;

    for (int i = 0; i < s2; i++)
        scanf("%d", &b[i]);
    dfs(b, s2, 0);
    t2 = mintime;
    mintime = 0x7fffffff;

    for (int i = 0; i < s3; i++)
        scanf("%d", &c[i]);
    dfs(c, s3, 0);
    t3 = mintime;
    mintime = 0x7fffffff;

    for (int i = 0; i < s4; i++)
        scanf("%d", &d[i]);
    dfs(d, s4, 0);
    t4 = mintime;
    mintime = 0x7fffffff;
    //printf("%d %d %d %d\n", t1, t2, t3, t4);
    printf("%d\n", t1 + t2 + t3 + t4);
    return 0;
}

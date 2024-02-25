/**
 * https://www.luogu.com.cn/problem/P2437
 *
 * @File:   P2437.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-02-17
 *
 */
#include <bits/stdc++.h>

using namespace std;

#define MAXN 1000000
#define N    100

int *f1, *f2, *f;
int fa1[N], fa2[N];

void add(int *a, int *b, int *c)
{
    int ca, s = 0;

    ca = 0;
    for (int i = 0; i < N; i++)
    {
        s = a[i] + b[i] + ca;
        if (s >= MAXN)
        {
            s -= MAXN;
            ca = 1;
        }
        else
            ca = 0;
        c[i] = s;
    }
}

void print(int *f)
{
    int i = N - 1;
    while (i >= 0 && !f[i])
        i--;
    printf("%d", f[i]);
    for (i--; i >= 0; i--)
        printf("%06d", f[i]);
    printf("\n");
}

int main(void)
{
    int n, m;

    scanf("%d %d", &n, &m);
    fa1[0] = 1;
    fa2[0] = 1;

    for (int i = 2; i <= m - n; i++)
    {
        f = (i % 2) ? fa2 : fa1;
        add(fa1, fa2, f);
    //print(f);
    }
    print(f);
    //printf("%d\n", fa2[0]);
    return 0;
}

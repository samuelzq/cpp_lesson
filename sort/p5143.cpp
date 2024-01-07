/**
 * https://www.luogu.com.cn/problem/p5143
 *
 * @File:   p5143.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2023-12-30
 *
 */
#include <bits/stdc++.h>

using namespace std;

struct pole {
    int x, y, z;
} p[500005];

bool cmp(struct pole &p1, struct pole &p2)
{
    return p1.z < p2.z;
}

int square(int x)
{
    return x * x;
}

double dis(struct pole &p1, struct pole &p2)
{
    double d;

    d = sqrt(square(p1.x - p2.x) + square(p1.y - p2.y) + square(p1.z - p2.z));
    return d;
}

int main(void)
{
    int n;
    double d;

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d %d %d", &p[i].x, &p[i].y, &p[i].z);

    sort(p, p + n, cmp);
    d = 0;
    for (int i = 1; i < n; i++)
        d += dis(p[i - 1], p[i]);

    printf("%.3lf\n", d);
    return 0;
}

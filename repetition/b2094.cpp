/**
 * https://www.luogu.com.cn/problem/B2094
 *
 * @File:   b2094.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2023-11-25
 *
 */
#include <iostream>

using namespace std;

int a[103];

int main(void)
{
    int n, maxn, out;

    scanf("%d", &n);

    maxn = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if (maxn < a[i])
            maxn = a[i];
    }

    out = 0;
    for (int i = 0; i < n; i++)
    {
        if (maxn == a[i])
            continue;
        out += a[i];
    }
    printf("%d\n", out);
    return 0;
}

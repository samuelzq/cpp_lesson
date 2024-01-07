/**
 * https://www.luogu.com.cn/problem/P2676
 *
 * @File:   p2676.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2023-12-30
 *
 */
#include <bits/stdc++.h>

using namespace std;

int h[20004];

int main(void)
{
    int n, b, cnt, s;

    scanf("%d %d", &n, &b);

    for (int i = 0; i < n; i++)
        scanf("%d", &h[i]);

    sort(h, h + n);
    s = cnt = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        s += h[i];
        cnt++;
        if (s >= b)
            break;
    }
    printf("%d\n", cnt);
    return 0;
}

/**
 * https://www.luogu.com.cn/problem/P1047
 *
 * @File:   p1047.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2023-11-19
 *
 */
#include <iostream>

using namespace std;

int t[10004] = {0};

int main(void)
{
    int l, m, cnt;

    scanf("%d %d", &l, &m);
    while (m--)
    {
        int u, v;

        scanf("%d %d", &u, &v);
        for (int i = u; i <= v; i++)
            t[i] = 1;
    }

    cnt = l + 1;
    for (int i = 0; i <= l; i++)
    {
        cnt -= t[i];
    }
    printf("%d\n", cnt);
    return 0;
}

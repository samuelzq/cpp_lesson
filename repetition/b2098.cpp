/**
 * https://www.luogu.com.cn/problem/B2098
 *
 * @File:   b2098.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2023-11-25
 *
 */
#include <iostream>

using namespace std;

char bmap[20004] = {0, };
int a[20004];

int main(void)
{
    int n, m;

    scanf("%d", &n);

    m = 0;
    for (int i = 0; i < n; i++) {
        int t;

        scanf("%d", &t);
        if (bmap[t])
            continue;

        bmap[t] = 1;
        a[m] = t;
        m++;
    }

    for (int i = 0; i < m -1; i++)
        printf("%d ", a[i]);

    printf("%d\n", a[m - 1]);
    return 0;
}

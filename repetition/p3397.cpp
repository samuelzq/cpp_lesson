/**
 * https://www.luogu.com.cn/problem/P3397
 *
 * @File:   p3397.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2023-12-10
 *
 */
#include <iostream>

using namespace std;

int mm[1003][1003] = {{0}, };

int main(void)
{
    int n, m;

    scanf("%d %d", &n, &m);

    for (int i = 0; i < m; i++)
    {
        int x1, x2, y1, y2;

        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

        for (int i = x1; i <= x2; i++)
            for (int j = y1; j <= y2; j++)
                mm[i][j] += 1;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j < n; j++)
            printf("%d ", mm[i][j]);
        printf("%d\n", mm[i][n]);
    }
    return 0;
}

/**
 * https://www.luogu.com.cn/problem/P1614
 *
 * @File:   p1614.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2023-12-10
 *
 */
#include <iostream>

using namespace std;

int a[3005];

int main(void)
{
    int n, m, sum;

    scanf("%d %d", &n, &m);

    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    sum = 0;
    for (int i = 0; i < m; i++)
        sum += a[i];
    for (int i = 1; i < n - m; i++)
    {
        int t = 0;
        for (int j = 0; j < m; j++)
            t += a[i + j];
        if (t < sum)
            sum = t;
    }
    printf("%d\n", sum);
    return 0;
}

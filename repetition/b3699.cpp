/**
 * https://www.luogu.com.cn/problem/B3688
 *
 * @File:   b3699.cpp
 * @Author: Lao Zhang samuelzhang77@yahoo.com
 * @Date:   2023-11-12
 *
 */
#include <iostream>

using namespace std;

int a[20004];

int main(void)
{
    int n;

    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
        scanf("%d", &a[i]);

    while (1)
    {
        a[0] = a[n];
        for (int i = n; i > 1; i--)
            a[i] = a[i - 1];
        a[1] = a[0];
        for (int i = 1; i < n; i++)
            printf("%d ", a[i]);
        printf("%d\n", a[n]);

        if (a[n] == n)
            break;

    }
    return 0;
}

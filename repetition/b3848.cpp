/**
 * https://www.luogu.com.cn/problem/B3848
 *
 * @File:   b3848.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2023-11-18
 *
 */
#include <iostream>

using namespace std;

int a[103];

int main(void)
{
    int n, out, x;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &x);
    out = 0;
    for (int i = 0; i < n; i++)
    {
        if (x >= a[i])
        {
            out++;
            x = x - a[i];
        }
    }
    printf("%d\n", out);
    return 0;
}

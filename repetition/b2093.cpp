/**
 * https://www.luogu.com.cn/problem/B2093
 *
 * @File:   b2093.cpp
 * @Author: Lao Zhang samuelzhang77@yahoo.com
 * @Date:   2023-11-12
 *
 */
#include <iostream>

using namespace std;

int a[10004];

int main(void)
{
    int n, x, i;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &x);

    for (i = 0; i < n; i++)
    {
        if (a[i] == x)
            break;
    }

    if (i < n)
        printf("%d\n", i);
    else
        printf("-1\n");
    return 0;
}

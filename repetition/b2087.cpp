/**
 * https://www.luogu.com.cn/problem/B2087
 *
 * @File:   b2087.cpp
 * @Author: Lao Zhang samuelzhang77@yahoo.com
 * @Date:   2023-11-12
 *
 */
#include <iostream>

using namespace std;

int a[200];

int main(void)
{
    int n, c, m;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    scanf("%d", &m);

    c = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == m)
            c++;
    }
    printf("%d\n", c);
    return 0;
}

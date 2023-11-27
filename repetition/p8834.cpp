/**
 * https://www.luogu.com.cn/problem/P8834
 *
 * @File:   p8834.cpp
 * @Author: Lao Zhang samuelzhang77@yahoo.com
 * @Date:   2023-11-12
 *
 */
#include <iostream>

using namespace std;

long long int a[1004];

int main(void)
{
    int n, out;
    long long k;

    scanf("%d %lld", &n, &k);
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &a[i]);
    }

    out = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] *a[j] <= k)
                out++;
        }
    }
    printf("%d\n", out);
    return 0;
}

/**
 * https://www.luogu.com.cn/problem/B3651
 *
 * @File:   b3651.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2023-11-25
 *
 */
#include <iostream>

using namespace std;

int main(void)
{
    int n, k;
    long long sum;

    scanf("%d %d", &n, &k);

    sum = 0;
    for (int i = 1; i <= n; i++)
    {
        int t;

        scanf("%d", &t);
        if (i == k)
            sum -= (long long)t;
        else
            sum += (long long)t;
    }
    printf("%lld\n", sum);
    return 0;
}

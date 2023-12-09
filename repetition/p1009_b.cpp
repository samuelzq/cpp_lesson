/**
 * https://www.luogu.com.cn/problem/P1009
 *
 * @File:   p1009.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2023-12-08
 *
 */
#include <iostream>

using namespace std;

int main(void)
{
    int n;
    unsigned long long s;

    scanf("%d", &n);

    s = 0;
    for (int i = 1; i <= n; i++)
    {
        unsigned long long p;
        p = 1;
        for (unsigned long long j = 1; j <= i; j++)
        {
            p *= j;
        }
        s += p;
    }
    printf("%llu\n", s);
    return 0;
}

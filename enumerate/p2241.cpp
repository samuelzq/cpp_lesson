/**
 * https://www.luogu.com.cn/problem/p2241
 *
 * @File:   p2241.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2023-12-31
 *
 */
#include <bits/stdc++.h>

using namespace std;

#ifndef METHOD2
#define METHOD1 1
#endif

int main(void)
{
    long long n, m, s, r;

    scanf("%lld %lld", &n, &m);

    s = r = 0;
#ifdef METHOD1
    for (long long int i = 0; i <= n; i++)
    {
        for (long long int j = 0; j <= m; j++)
        {
            long long ss = min(i, j) + min(i, m - j) + min(n - i, j) + min(n - i, m- j);
            s += ss;
            r += n * m - ss;
        }
    }
    s /= 4;
    r /= 4;
#endif

#ifdef METHOD2
    for (long long i = 0; i <= n; i++)
    {
        for (long long j = 0; j <= m; j++)
        {
            long long ss = min(i, j);
            s += ss;
            r += i * j - ss;
        }
    }
#endif
    printf("%lld %lld\n", s, r);
    return 0;
}

/**
 * https://www.luogu.com.cn/problem/P7494
 *
 * @File:   P7494.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-06-14
 *
 */
#include <bits/stdc++.h>
using namespace std;

#define LL long long
LL n, m;

LL weigh(LL x)
{
    if (x <= 1)
        return 0;
    if (x <= 3 * m)
        return 1 + weigh((x + 2) / 3);

    LL k = (x - m) / (2 * m);
    return weigh(x - k * 2 * m) + k;   // n >= 3m+2   不能直接分成三等份
}

int main(void)
{
    scanf("%lld %lld", &n, &m);
    printf("%lld\n", weigh(n));
    return 0;
}

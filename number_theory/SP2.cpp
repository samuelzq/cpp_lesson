/**
 * https://vjudge.net/problem/SPOJ-PRIME1
 *
 * @File:   SP2.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-06-07
 *
 */
#include <bits/stdc++.h>
using namespace std;

#define N  100005
char prime[N] = {0};

void init(int l, int r)
{
    int lim = sqrt(r);

    memset(prime, 0, N);
    for (int i = 2; i <= lim; i++)
        for (int j = max(i * i, (l + i - 1) / i * i); j <= r; j += i)
            prime[j - l] = 1;
    if (l ==1)
        prime[0] = 1;
}

int main(void)
{
    int t;

    scanf("%d", &t);
    while (t--) {
        int m, n;

        scanf("%d %d", &m, &n);
        init(m, n);

        for (int i = 0; i <= n - m; i++)
            if (!prime[i])
                printf("%d\n", i + m);
        printf("\n");
    }
    return 0;
}

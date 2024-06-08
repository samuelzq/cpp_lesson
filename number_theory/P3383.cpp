/**
 * https://www.luogu.com.cn/problem/P3383
 *
 * @File:   P3383.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-06-03
 *
 */
#include <iostream>

#define N  100000008
char prime[N] = {0};
int p[6000000];

void init(int n)
{
    prime[0] = prime[1] = 1;

    for (int i = 2; i * i <= n; i++) {
        if (!prime[i]) {
            for (int j = i * i; j <= N; j += i)
                prime[j] = 1;
        }
    }

    p[1] = 2;
    for (int i = 2, c = 3; c <= n; c += 2) {
        if (!prime[c])
            p[i++] = c;
    }
}

int main(void)
{
    int n, q;

    scanf("%d %d", &n, &q);
    init(n);
    while (q--) {
        int k;

        scanf("%d", &k);
        printf("%d\n", p[k]);
    }
    return 0;
}

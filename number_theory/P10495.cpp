/**
 * https://www.luogu.com.cn/problem/P10495
 *
 * @File:   P10495.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-06-06
 *
 */
#include <bits/stdc++.h>
using namespace std;

#define N    1000006
int prime[N] = {0};
int p[N] = {0}, k = 0;

void init(int n)
{
    prime[0] = prime[1] = 1;

    for (int d = 2; d * d <= n; d++) {
        if (!prime[d]) {
            for (int j = d * d; j <= n; j += d)
                prime[j] = 1;
        }
    }

    p[k++] = 2;
    for (int d = 3; d <= n; d += 2) {
        if (!prime[d])
            p[k++] = d;
    }
}

static int ppow(int b, int e)
{
    int p = 1;
    while (e--)
        p *= b;
    return p;
}

int main(void)
{
    int n;

    scanf("%d", &n);
    init(n);
    for (int i = 0; i < k; i++) {
        int c = 0;
        for (int j = 1; pow(p[i], j) <= n; j++)
            c += n / pow(p[i], j);
        printf("%d %d\n", p[i], c);
    }

    return 0;
}

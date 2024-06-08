/**
 * https://www.luogu.com.cn/problem/B2138
 *
 * @File:   B2138.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-05-30
 *
 */
#include <bits/stdc++.h>
using namespace std;

#define N     5005
int prime[N] = {0};

void init(void)
{
    prime[0] = prime[1] = 1;

    for (int i = 2; i * i <= N; i++) {
        if (prime[i])
            continue;
        for (int j = i * i; j <= N; j += i)
            prime[j] = 1;
    }
}

int main(void)
{
    int m, n, t;

    init();
    cin >> m >> n;

    for (int i = m; i < n; i++) {
        t = i;

        while (t >= 2) {
            if (!prime[t] && (i % t == 0)) {
                cout << t << ',';
                break;
            }
            t--;
        }
    }
    t = n;
    while (t >= 2) {
        if (!prime[t] && (n % t == 0)) {
            cout << t << endl;
            break;
        }
        t--;
    }
    return 0;
}

/**
 * https://www.luogu.com.cn/problem/p2043
 *
 * @File:   p2043.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-05-26
 *
 */
#include <bits/stdc++.h>
using namespace std;

int prime[10004] = {0};
int p[10004] = {0};

void init(int n)
{
    prime[0] = prime[1] = 1;

    for (int i = 2; i * i <= n; i++) {
        for (int j = i * i; j <= n; j += i)
            prime[j] = 1;
    }
}

int main(void)
{
    int n, m = 2;

    cin >> n;
    init(10);

    for (int j = 2; j <= n; j++) {
        int t = j;
        while ((t % 2) == 0) {
            p[2]++;
            t /= 2;
        }

        for (int i = 3; i <= t; i += 2) {
            if (prime[i])
                continue;
            while ((t % i) == 0) {
                p[i]++;
                t /= i;
            }
            m = max(m, i);
        }
    }

    for (int i = 2; i <= m; i++) {
        if (!prime[i] && p[i])
            cout << i << ' ' << p[i] << endl;
    }
    return 0;
}

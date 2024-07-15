/**
 * https://www.luogu.com.cn/problem/P1832
 *
 * @File:   P1832.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-06-22
 *
 */
#include <bits/stdc++.h>
using namespace std;

#define N 1004
long long int f[N] = {0}, p[N], s = 0;
bool prime[N] ={0};

void init(void)
{
    p[s++] = 2;

    prime[0] = prime[1] = true;

    for (int i = 2; i * i <= N; i++) {
        if (!prime[i]) {
            for (int j = i * i; j <= N; j += i)
                prime[j] = true;
        }
    }

    for (int i = 3; i <= N; i += 2) {
        if (!prime[i])
            p[s++] = i;
    }
}

int main(void)
{
    int n;

    cin >> n;
    init();

    f[0] = 1;
    for (int i = 2; i <= n; i++) {
        if (!prime[i]) {
            for (int j = i; j <= n; j++)
            f[j] += f[j - i];
        }
    }

    cout << f[n] << endl;
    return 0;
}

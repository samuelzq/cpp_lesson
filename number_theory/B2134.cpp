/**
 * https://www.luogu.com.cn/problem/B2134
 *
 * @File:   B2134.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-05-30
 *
 */

#include <bits/stdc++.h>

using namespace std;

#define N 10000
int prime[N] = {0};

void init(void)
{
    prime[0] = prime[1] = 1;
    for (int i = 2; i * i <= N; i++) {
        if (!prime[i]) {
            for (int j = i * i; j <= N; j += i) {
                prime[j] = 1;
            }
        }
    }
}

int main(void)
{
    int n;

    init();
    cin >> n;
    for (int i = n / 2; i >= 2; i--) {
        if (!prime[i] && !prime[n - i]) {
            cout << i * (n - i) << endl;
            break;
        }
    }
    return 0;
}

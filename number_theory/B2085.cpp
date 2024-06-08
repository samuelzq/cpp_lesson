/**
 * https://www.luogu.com.cn/problem/B2085
 *
 * @File:   B2085.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-05-30
 *
 */
#include <bits/stdc++.h>
using namespace std;

// 第30000个质数是：320363
#define N 1000000

int prime[N] = {0};

void init(void)
{
    prime[1] = prime[0] = 1;

    for (int i = 2; i * i <= N; i++) {
        if (!prime[i]) {
            for (int j = i * i; j <= N; j += i)
                prime[j] = 1;
        }
    }
}

int main(void)
{
    int n;

    init();

    cin >> n;

    for (int i = 2; i <= N; i++) {
        if (!prime[i])
            n--;

        if (!n) {
            cout << i << endl;
            break;
        }
    }
    return 0;
}

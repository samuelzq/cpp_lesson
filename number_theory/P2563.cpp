/**
 *
 * @File:   P2563.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-05-26
 *
 */
#include <bits/stdc++.h>
using namespace std;

int p[200];
int prime[203] = {0};
int cnt[203] = {0};
int c = 0, n = 0;

void init(void)
{
    prime[0] = prime[1] = 1;

    for (int i = 2; i * i <= 200; i++) {
        if (!prime[i]) {
            for (int j = i * i; j <= 200; j += i)
                prime[j] = 1;
        }
    }

    p[c++] = 2;
    for (int i = 3; i <= 200; i += 2) {
        if (!prime[i]) {
            p[c++] = i;
        }
    }

    cnt[0] = 1;

    for (int i = 0; i < c; i++) {
        for (int j = p[i]; j <= 200; j++) {
            cnt[j] += cnt[j - p[i]];
        }
    }
}

int main(void)
{
    init();
    while (cin >> n) {
        cout << cnt[n] << endl;
    }
}

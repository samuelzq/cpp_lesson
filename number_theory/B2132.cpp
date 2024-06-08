/**
 * https://www.luogu.com.cn/problem/B2132
 *
 * @File:   B2132.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-05-30
 *
 */
#include <bits/stdc++.h>
using namespace std;

int prime[10004] = {0};

void init(int len)
{
    prime[0] = prime[1] = 1;
    for (int i = 2; i * i <= len; i++) {
        if (!prime[i]) {
            for (int j = i * i; j <= len; j += i)
                prime[j] = 1;
        }
    }
}

int main(void)
{
    bool o = false;
    int n;

    cin >> n;
    init(n);

    for (int i = 3; i <= n - 2; i+= 2) {
        if (!prime[i] && !prime[i + 2]) {
            o = true;
            cout << i << ' ' << i + 2 << endl;
        }
    }
    if (o == false)
        cout << "empty" << endl;
    return 0;
}

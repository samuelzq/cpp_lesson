/**
 * https://www.luogu.com.cn/problem/B2128
 *
 * @File:   B2128.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-05-31
 *
 */
#include <bits/stdc++.h>
using namespace std;

int prime[50004] = {0};

void init(int n)
{
    prime[0] = prime[1] = {1};
    for (int i = 2; i * i <= n; i++) {
        if (!prime[i]) {
            for (int j = i * i; j <= n; j += i)
                prime[j] = 1;
        }
    }
}

int main(void)
{
    int n, cnt;

    cin >> n;
    init(n);

    cnt = 0;
    for (int i = 2; i <= n; i++) {
        if (!prime[i])
            cnt++;
    }
    cout << cnt << endl;
    return 0;
}

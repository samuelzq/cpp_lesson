/**
 * https://www.luogu.com.cn/problem/B2137
 *
 * @File:   B2137.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-05-31
 *
 */
#include <bits/stdc++.h>
using namespace std;

#define N 1100005
int prime[N];

void init(int n)
{
    prime[0] = prime[1] = 1;

    for (int i = 2; i * i <= n; i++) {
        if (!prime[i]) {
            for (int j = i * i; j <= n; j += i)
                prime[j] = 1;
        }
    }
}

int main(void)
{
    int x, y, cnt;

    cin >> x >> y;
    if (x > y)
        swap(x, y);
    init(y);

    cnt = 0;
    for (int i = x; i <= y; i++) {
        if (!prime[i])
            cnt++;
    }
    cout << cnt << endl;
    return 0;
}

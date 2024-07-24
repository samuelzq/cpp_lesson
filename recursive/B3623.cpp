/**
 * https://www.luogu.com.cn/problem/B3623
 *
 * @File:   B3623.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-06-22
 *
 */
#include <bits/stdc++.h>
using namespace std;

int n, k;
int a[11] = {0};
int b[11] = {0};

void dfs(int d)
{
    if (d == k) {
        for (int i = 0; i < k - 1; i++)
            printf("%d ", a[i]);
        printf("%d\n", a[k - 1]);
        return;
    }

    for (int i = 1; i <= n; i++) {
        if (b[i])
            continue;

        b[i] = 1;
        a[d] = i;
        dfs(d+1);
        b[i] = 0;
    }
}

int main(void)
{
    cin >> n >> k;
    dfs(0);
    return 0;
}

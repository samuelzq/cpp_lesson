/**
 * https://www.luogu.com.cn/problem/P1164
 *
 * @File:   P1164.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-02-17
 *
 */
#include <bits/stdc++.h>

using namespace std;

int n, m, cnt = 0;
int a[103] = {0};

void dfs(int k, int d)
{
    if (d == m)
    {
        cnt++;
        return;
    }

    if (k > n)
        return;

    if (d > m)
        return;
    dfs(k + 1, d + a[k]);
    dfs(k + 1, d);
}

int main(void)
{
    cin >> n >> m;

    for (int i = 1; i <= n; i++)
        cin >> a[i];
    dfs(1, 0);
    cout << cnt << endl;
    return 0;
}


/**
 * https://www.luogu.com.cn/problem/P1219
 *
 * @File:   P1219.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-04-04
 *
 */
#include <bits/stdc++.h>

using namespace std;

int a[14 * 14] = {0}, b[14] = {0}, c[14] = {0}, d[30] = {0};
int n, cnt;

void dfs(int k)
{
    if (k > n) {
        cnt++;
        if (cnt <= 3) {
            for (int i = 1; i < n; i++)
                cout << c[i] << ' ';
            cout << c[n] << endl;
        }
        return;
    }

    for (int i = 1; i <= n; i++) {
        if (b[i] || d[k + i] || a[n + k - i])
            continue;
        b[i] = 1;
        c[k] = i;
        d[k + i] = 1;
        a[n + k - i] = 1;
        dfs(k + 1);
        b[i] = 0;
        d[k + i] = 0;
        a[n + k - i] = 0;
    }
}

int main(void)
{
    cnt = 0;
    cin >> n;
    dfs(1);
    cout << cnt << endl;
    return 0;
}

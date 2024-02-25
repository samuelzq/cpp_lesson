/**
 * https://www.luogu.com.cn/problem/P1036
 *
 * @File:   P1036.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-02-17
 *
 */
#include <bits/stdc++.h>

using namespace std;

int a[22];
int cnt = 0;
int n, k;
int f[22];

bool is_prime(int n)
{
    if (n == 2)
        return true;

    if (n == 1 || !(n % 2))
        return false;

    for (int i = 3; i * i < n; i += 2)
    {
        if (!(n % i))
            return false;
    }
    return true;
}

void dfs(int dep, int i, int num)
{
    if (dep > n)
        return;

    if (i == k)
    {
        if (is_prime(num))
            cnt++;
        return;
    }

    dfs(dep + 1, i + 1, num + a[dep + 1]);
    dfs(dep + 1, i, num);
}

int main(void)
{
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    dfs(0, 0, 0);
    cout << cnt << endl;
    return 0;
}

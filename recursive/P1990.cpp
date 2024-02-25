/**
 * https://www.luogu.com.cn/problem/P1990
 *
 * @File:   P1990.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-02-17
 *
 */
#include <bits/stdc++.h>

using namespace std;

int f[1000006] = {0}, g[1000006] = {0};

int main(void)
{
    int n;

    cin >> n;
    f[0] = f[1] = g[1] = 1;

    for (int i = 2; i <= n; i++)
    {
        f[i] = f[i - 1] + f[i - 2] + 2 * g[i - 2] % 10000;
        f[i] %= 10000;
        g[i] = (f[i - 1] + g[i - 1]) % 10000;
    }
    cout << f[n] << endl;
    return 0;
}

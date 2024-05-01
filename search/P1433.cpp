/**
 *
 * @File:   P1433.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-04-09
 *
 */
#include <bits/stdc++.h>

using namespace std;

int a[20];
double l[20][2], dp[65000][20];
double g[20][20] = {0.0};
int n;
double d = 9e19;

#define POWER(x)   ((x) * (x))
double dist(int a, int b)
{
    return sqrt(POWER(l[a][0] - l[b][0]) + POWER(l[a][1] - l[b][1]));
}

void dfs(int x, int y, double c, int b)
{
    if (c > d)
        return;
    //cout << c << endl;
    if (x >= n) {
        if (d > c)
            d = c;
        return;
    }

    for (int i = 1; i <= n; i++) {
        int p = b + (1 << (i - 1));
        if (a[i])
            continue;
        if (dp[p][i] != 0 && dp[p][i] < c + g[y][i])
            continue;
        dp[p][i] = c + g[y][i];
        a[i] = 1;
        dfs(x + 1, i, dp[p][i], p);
        a[i] = 0;
    }
}

int main(void)
{
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cin >> l[i][0] >> l[i][1];
        for (int j = 0; j < i; j++)
            g[i][j] = g[j][i] = dist(j, i);
    }

    dfs(0, 0, 0, 0);
    cout << fixed << setprecision(2) << d << endl;
    return 0;
}

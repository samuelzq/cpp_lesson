/**
 * https://www.luogu.com.cn/problem/P1605
 *
 * @File:   P1605.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-04-08
 *
 */
#include <bits/stdc++.h>

using namespace std;

int a[10][10], b[10][10];
int w[4][2] = {{1, 0}, {-1, 0}, {0, -1}, {0, 1}};
int n, m, t;
int sx, sy, fx, fy;
int cnt = 0;

void dfs(int x, int y)
{
    if (x == fx && y == fy) {
        cnt++;
        return;
    }

    if (x < 1 || y < 1 || x > n || y > m)
        return;

    //cout << x << ' ' << y << endl;
    for (int i = 0; i < 4; i++) {
        int c, r;
        c = x + w[i][0];
        r = y + w[i][1];

        if (a[c][r])
            continue;

        a[c][r] = 1;
        dfs(c, r);
        a[c][r] = 0;
    }
}

int main(void)
{
    cin >> n >> m >> t;
    cin >> sx >> sy >> fx >> fy;

    for (int i = 0; i < t; i++) {
        int x, y;
        cin >> x >> y;
        a[x][y] = 1;
    }

    a[sx][sy] = 1;

    for (int i = 0; i < 4; i++) {
        int c, r;
        c = sx + w[i][0];
        r = sy + w[i][1];

        if (a[c][r])
            continue;

        a[c][r] = 1;
        dfs(c, r);
        a[c][r] = 0;
    }
    cout << cnt << endl;
    return 0;
}


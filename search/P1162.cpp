/**
 * https://www.luogu.com.cn/problem/P1162
 *
 * @File:   P1162.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-06-08
 *
 */
#include <bits/stdc++.h>
using namespace std;

int w[4][2] = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};
int m[32][32];
int p[32][32] = {{0}};
int n;

void dfs(int x, int y)
{
    if (x < 0 || y < 0 || x > n + 1 || y > n + 1 || p[x][y])
        return;

    p[x][y] = 1;

    for (int i = 0; i < 4; i++) {
        int xx, yy;

        xx = x + w[i][0];
        yy = y + w[i][1];
        dfs(xx, yy);
    }
}

int main(void)
{
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> m[i][j];

            if (m[i][j])
                p[i][j] = 2;
        }
    }

    dfs(0, 0);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j < n; j++) {
            if (p[i][j] == 0)
                cout << 2 << ' ';
            else
                cout << m[i][j] << ' ';
        }
        if (p[i][n] == 0)
            cout << 2 << endl;
        else
            cout << m[i][n] << endl;
    }
    return 0;
}

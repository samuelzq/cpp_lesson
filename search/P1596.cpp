/**
 * https://www.luogu.com.cn/problem/P1596
 *
 * @File:   P1596.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-04-24
 *
 */
#include <bits/stdc++.h>
using namespace std;

char f[110][110];
int w[8][2] = {{-1, 0}, {0, -1}, {1, 0}, {0, 1}, {1, 1}, {1, -1}, {-1, 1}, {-1, -1}};
int cnt = 0;

void dfs(int x, int y)
{
    int xx, yy;

    if (!f[x][y] || f[x][y] == '.')
        return;

    f[x][y] = 0;
    for (int i = 0; i < 8; i++) {
        xx = x + w[i][0];
        yy = y + w[i][1];
        dfs(xx, yy);
    }
}

int main(void)
{
    int n, m;

    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++)
            cin >> f[i][j];
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (f[i][j] == 'W') {
                cnt++;
                dfs(i, j);
            }
        }
    }
    cout << cnt << endl;
    return 0;
}

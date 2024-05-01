/**
 * https://www.luogu.com.cn/problem/P1443
 *
 * @File:   P1443.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-04-04
 *
 */
#include <bits/stdc++.h>

using namespace std;

int w[8][2] = {
    {-2, -1},
    {-2, 1},
    {-1, 2},
    {1, 2},
    {2, 1},
    {2, -1},
    {1, -2},
    {-1, -2}
};

struct step {
    int x, y, s;
};

int a[404][404] = { {0} };
int n, m;
queue<struct step> q;

int main(void)
{
    int x, y ;
    struct step cur;

    cin >> n >> m >> x >> y;
    cur.x = x;
    cur.y = y;
    cur.s = 1;
    q.push(cur);
    a[x][y] = 1;
    while (!q.empty()) {
        struct step p = q.front();
        q.pop();
        for (int i = 0; i < 8; i++) {
            int c, r;
            struct step nn;
            c = p.x + w[i][0];
            r = p.y + w[i][1];

            if (c < 1 || r < 1 || c > n || r > m)
                continue;

            if (a[c][r])
                continue;

            a[c][r] = p.s + 1;
            nn.x = c;
            nn.y = r;
            nn.s = p.s + 1;
            q.push(nn);
        }
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j < m; j++) {
            cout << setw(5) << a[i][j] - 1 << ' ';
        }
        cout << setw(5) << a[i][m] - 1 << endl;
    }
    return 0;
}

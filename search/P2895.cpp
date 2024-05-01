/**
 * https://www.luogu.com.cn/problem/P2895
 *
 * @File:   P2895.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-04-04
 *
 */
#include <bits/stdc++.h>

using namespace std;

int a[500][502] = {{0}};
int b[505][502] = {{0}};
int s[4][2] = {
    {-1, 0}, {1, 0}, {0, - 1}, {0, 1}
};

int main(void)
{
    int m;
    queue<pair<int, int>> q;

    memset(a, 0x3f, sizeof(a));
    cin >> m;

    for (int i = 0; i < m; i++) {
        int x, y, t;

        cin >> x >> y >> t;

        a[x][y] = min(a[x][y], t);

        if (x > 0)
            a[x - 1][y] = min(a[x - 1][y], t);

        if (y > 0)
            a[x][y - 1] = min(a[x][y - 1], t);

        a[x][y + 1] = min(a[x][y + 1], t);
        a[x + 1][y] = min(a[x + 1][y], t);
    }

    q.push(make_pair(0, 0));
    b[0][0] = 1;
    while (!q.empty()) {
        pair<int, int> p = q.front();
        int t = b[p.first][p.second];
        q.pop();

        if (a[p.first][p.second] == 0x3f3f3f3f) {
            cout << t - 1 << endl;
            return 0;
        }

        for (int i = 0; i < 4; i++) {
            int c, r;
            c = p.first + s[i][0];
            r = p.second + s[i][1];

            if (c < 0 || r < 0 || b[c][r])
                continue;

            if (a[c][r] != 0x3f3f3f3f && t >= a[c][r])
                continue;
            //cout << t << '-' << c << ',' << r << '~' << a[c][r] << endl;

            b[c][r] = t + 1;
            q.push(make_pair(c, r));
        }
    }

    cout << -1 << endl;
    return 0;
}

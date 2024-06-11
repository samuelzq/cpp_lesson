/**
 * https://www.luogu.com.cn/problem/P1825
 *
 * @File:   P1825.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-06-08
 *
 */
#include <bits/stdc++.h>
using namespace std;

struct point {
    int x, y, s;
};

char mm[303][303];
int vis[303][303] = {{0}};
int w[4][2] = {{1, 0}, {-1, 0}, {0, -1}, {0, 1}};
point start;
point slide[26][2] = {{0}};
int n, m;

queue<point> q;

int main(void)
{
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            char c;
            cin >> c;
            if (c == '@') {
                start.x = i;
                start.y = j;
            }
            if (c >= 'A' && c <= 'Z') {
                int k = c - 'A';
                if (slide[k][0].x) {
                    slide[k][1].x = i;
                    slide[k][1].y = j;
                } else {
                    slide[k][0].x = i;
                    slide[k][0].y = j;
                }
            }
            mm[i][j] = c;
        }
    }

    start.s = 0;
    q.push(start);

    while (!q.empty()) {
        char c;
        point t = q.front();
        q.pop();
        c = mm[t.x][t.y];
        if (c == '=') {
            cout << t.s << endl;
            return 0;
        }

        if ('A' <= c && c <= 'Z') {
            int j = c - 'A';
            int xx, yy;
            if (slide[j][0].x == t.x && slide[j][0].y == t.y)
                xx = slide[j][1].x, yy = slide[j][1].y;
            else
                xx = slide[j][0].x, yy = slide[j][0].y;
            t.x = xx;
            t.y = yy;
        }
        for (int i = 0; i < 4; i ++) {
            int xx, yy;
            point p;
            xx = w[i][0] + t.x;
            yy = w[i][1] + t.y;
            if (xx == 0 || yy == 0 || xx > n || yy > m || mm[xx][yy] == '#' || vis[xx][yy])
                continue;
            vis[xx][yy] = 1;
            p.x = xx;
            p.y = yy;
            p.s = t.s + 1;
            q.push(p);
        }
    }
    return 0;
}

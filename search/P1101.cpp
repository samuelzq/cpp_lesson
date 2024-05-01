/**
 * https://www.luogu.com.cn/problem/P1101
 * @File:   P1101.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-04-23
 *
 */
#include <bits/stdc++.h>

using namespace std;

char str[] = "yizhong";
char m[104][104] = {{0}};
int a[104][104] = {{0}};
int y[10004][2] = {0};
int w[8][2] = {{-1, 0}, {0, -1}, {1, 0}, {0, 1}, {-1, -1}, {-1, 1}, {1, -1}, {1, 1}};
int n;

bool dfs(int x, int y, int dx, int dy, int d)
{
    int xx, yy;
    if (d >= 6) {
        a[x][y] = 1;
        return true;
    }

    xx = x + dx;
    yy = y + dy;
    if (xx < 0 || xx >= n || yy < 0 || yy >= n || m[xx][yy] != str[d + 1])
        return false;

    if (dfs(xx, yy, dx, dy, d + 1)) {
        a[xx][yy] = 1;
        return true;
    }
    return false;
}

int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> m[i];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (m[i][j] == 'y') {
                for (int k = 0; k < 8; k++) {
                    if (dfs(i, j, w[k][0], w[k][1], 0))
                        a[i][j] = 1;
                }
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j] == 1)
                cout << m[i][j];
            else
                cout << '*';
        }
        cout << endl;
    }
    return 0;
}

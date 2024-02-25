/**
 * https://www.luogu.com.cn/problem/B3702
 *
 * @File:   B3702.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-02-15
 *
 */
#include <bits/stdc++.h>

using namespace std;

struct node {
    int r, c;
} a[1004][1004];

int main(void)
{
    int m, n, s1, s2, t1, t2;

    cin >> m >> n >> s1 >> s2;
    t1 = s1;
    t2 = s2;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j += 1)
            cin >> a[i][j].r >> a[i][j].c;

    while (s1 | s2)
    {
        cout << s1 << ' ' << s2 << endl;
        t1 = a[s1][s2].r;
        t2 = a[s1][s2].c;
        s1 = t1;
        s2 = t2;
    }
    return 0;
}

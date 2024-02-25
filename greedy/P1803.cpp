/**
 * https://www.luogu.com.cn/problem/P1803
 *
 * @File:   P1803.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-02-25
 *
 */
#include <bits/stdc++.h>

using namespace std;

struct game {
    int b, e;
} g[1000006];

bool cmp(struct game &g1, struct game &g2)
{
    if (g1.e != g2.e)
        return g1.e < g2.e;
    else
        return g1.b > g2.b;
}

int main(void)
{
    int n, cnt, t;

    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> g[i].b >> g[i].e;
    sort(g, g + n, cmp);

    cnt = 1;
    t = g[0].e;
    for (int i = 1; i < n; i++)
    {
        //cout << t <<  ' ' << g[i].b << endl;
        if (t <= g[i].b)
        {
            cnt++;
            t = g[i].e;
        }
    }
    cout << cnt << endl;
    return 0;
}

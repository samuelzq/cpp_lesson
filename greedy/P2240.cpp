/**
 * https://www.luogu.com.cn/problem/P2240
 *
 * @File:   P2240.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-02-25
 *
 */
#include <bits/stdc++.h>

using namespace std;

struct gold {
    int w;
    int v;
    double a;

    gold(void) : w(0), v(0), a(0.0) {}

    gold(int _w, int _v) {
        this->w = _w;
        this->v = _v;
        this->a = 1.0 * _v / _w;
    };
};

struct gold g[110];

bool cmp(struct gold &g1, struct gold &g2)
{
    return g1.a > g2.a;
}

int main(void)
{
    int n, t;
    double cnt;

    cin >> n >> t;

    for (int i = 0; i < n; i++)
    {
        int w, v;
        cin >> w >> v;
        struct gold gg(w, v);
        g[i] = gg;
    }

    // 首先按照单价排序
    sort(g, g + n, cmp);
    cnt = 0;

    // 从单价最高的开始取
    for (int i = 0; i < n; i++)
    {
        if (g[i].w >= t)
        {
            cnt += t * g[i].a;
            t = 0;
            break;
        }
        else
        {
            cnt += g[i].v;
            t -= g[i].w;
        }
    }
    cout << fixed << std::setprecision(2) << cnt << endl;
    return 0;
}

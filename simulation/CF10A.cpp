/**
 * https://www.luogu.com.cn/problem/CF10A
 *
 * @File:   CF10A.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-02-12
 *
 */
#include <bits/stdc++.h>

using namespace std;


int main(void)
{
    int n, p1, p2, p3, t1, t2;
    int s, lr, l, r;

    lr = s = 0;
    cin >> n >> p1 >> p2 >> p3 >> t1 >> t2;
    cin >> l >> r;
    s = (r - l) * p1;
    lr = r;
    for (int i = 1; i < n; i++)
    {
        int g, g1, g2, g3;
        cin >> l >> r;
        g = l - lr;
        g1 = (g > t1) ? t1 : g;
        g -= g1;
        g2 = (g > t2) ? t2 : g;
        g -= g2;
        g3 = g;
        s += g1 * p1 + g2 * p2 + g3 * p3 + (r - l) * p1;
        lr = r;
    }
    cout << s << endl;
    return 0;
}

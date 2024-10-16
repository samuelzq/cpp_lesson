/**
 * https://www.luogu.com.cn/problem/P1163
 *
 * @File:   P1163.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-04-02
 *
 */
#include <bits/stdc++.h>

using namespace std;

int w0, w, m;

bool check(double p)
{
    int n;
    double x, y, s;

    x = w0 * 1.0;
    y = 1.0;

    n = 0;
    s = 0;
    for (int i = 0; i < m; i++) {
        y *= (1 + p);
        s += w * 1.0 / y;
    }
    return s > x;  // s大于x表示利息低了
}

int main(void)
{
    double l, r;

    cin >> w0 >> w >> m;
    l = 0;
    r = 5;

    while (r - l > 0.00000006) {
        double mid = (l + r) / 2;

        if (check(mid)) { // 利息太低了
            l = mid;
        } else {
            r = mid;
        }
    }
    cout << fixed << setprecision(1) << l * 100 << endl;
    return 0;
}

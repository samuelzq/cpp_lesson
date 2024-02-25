/**
 * https://www.luogu.com.cn/problem/B3638
 *
 * @File:   B3634.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-02-14
 *
 */
#include <bits/stdc++.h>

using namespace std;

struct point {
    int x, y;

    //point(int x, int y) : x(x), y(y) {}
};

double dist(struct point a, struct point b)
{
    return sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));
}

int main(void)
{
    double s, l1, l2, l3;
    struct point a, b, c;

    cin >> a.x >> a.y;
    cin >> b.x >> b.y;
    cin >> c.x >> c.y;
    l1 = dist(a, b);
    l2 = dist(b, c);
    l3 = dist(c, a);
    s = (l1 + l2 +l3) / 2;

    cout << sqrt(s * (s - l1) * (s - l2) * (s - l3)) << endl;
    return 0;
}

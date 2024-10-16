/**
 * https://www.luogu.com.cn/problem/P3743
 * @File:   P3743.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-04-02
 *
 */
#include <bits/stdc++.h>

using namespace std;

unsigned int n;
double p, a[100005], b[100005];

bool check(double t)
{
    double s = 0;

    for (int i = 0; i < n; i++) {
        if (b[i] * 1.0 > a[i] * t)
            continue;
        s += a[i] * t - b[i];
    }
    return s > t * p;
}

int main(void)
{
    unsigned int s;
    double l, r;

    cin >> n >> p;
    s = 0;
    r = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i] >> b[i];
        s += a[i];
    }
    l = 0;
    r = 1e10 * 1.0;

    if (s <= p) {
        cout << -1 << endl;
        return 0;
    }

    l = 0;
    while (r - l > 0.00000006) {
        double mid = (l + r) / 2;
        //cout << l << ' ' << mid << ' ' << r << endl;
        if (check(mid)) {
            r = mid - 0.0001;
        } else {
            l = mid + 0.0001;
        }
    }
    cout << fixed << setprecision(18) << l << endl;
    return 0;
}

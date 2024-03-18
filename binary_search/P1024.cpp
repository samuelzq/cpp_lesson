/**
 * https://www.luogu.com.cn/problem/P1024
 *
 * @File:   P1024.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-03-19
 *
 */
#include <bits/stdc++.h>

using namespace std;
double a, b, c, d;

const double ep = 1e-6;

double f(double x)
{
    return a * x * x * x + b * x * x + c * x + d;
}

int main(void)
{
    cin >> a >> b >> c >> d;

    for (int i = -100; i < 100; i++) {
        double l = i * 1.0, r = l + 1;

        if (fabs(f(l)) < ep) {
            cout << fixed << setprecision(2) << l << ' ';
        } else if (fabs(f(r)) < ep) {
            continue;
        } else if (f(l) * f(r) < 0) {
            double mid;
            while (r - l > ep) {
                mid = l + (r - l) / 2;
                if (f(r) * f(mid) > 0) {
                    r = mid;
                } else {
                    l = mid;
                }
            }
            cout << fixed << setprecision(2) << l << ' ';
        }
    }
    cout << endl;
    return 0;
}

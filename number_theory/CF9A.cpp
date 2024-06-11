/**
 * https://www.luogu.com.cn/problem/CF9A
 *
 * @File:   CF9A.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-06-11
 *
 */
#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    return b ? gcd(b, a % b) : a;
}

int main(void)
{
    int y, w, g;

    cin >> y >> w;

    if (y == w && y == 1) {
        cout << "1/1" << endl;
        return 0;
    }

    g = gcd(6, 7 - max(y, w));
    cout << (7 - max(y, w)) / g << '/' << 6 / g << endl;
    return 0;
}

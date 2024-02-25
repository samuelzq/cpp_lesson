/**
 * https://www.luogu.com.cn/problem/P1464
 *
 * @File:   P1464.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-02-15
 *
 */
#include <bits/stdc++.h>

using namespace std;

#define LL long long

LL w[22][22][22] = {{{0}}};

LL _w(LL a, LL b, LL c)
{
    LL t = 0;
//    cout << a << ' ' << b << ' ' << c << endl;
    if (a <= 0 || b <= 0 || c <= 0)
        return 1;
    if (a < 22 && b < 22 && c < 22 &&  w[a][b][c])
        return w[a][b][c];
    if (a > 20 || b > 20 || c > 20)
        t = _w(20, 20, 20);
    else if (a < b && b < c)
        t = _w(a, b, c - 1) + _w(a, b - 1, c - 1) - _w(a, b - 1, c);
    else
        t = _w(a - 1, b, c) + _w(a - 1, b - 1, c) + _w(a - 1, b, c - 1) - _w(a - 1, b - 1, c - 1);

    if (a < 22 && b < 22 && c < 22)
        w[a][b][c] = t;
    return t;

}

int main(void)
{
    LL a, b, c;

    while (cin >> a >> b >> c)
    {
        if (c == -1 && b == -1 && c == -1)
            break;
        cout << "w(" << a << ", " << b << ", " << c << ") = " << _w(a, b, c) << endl;
    }

    return 0;
}

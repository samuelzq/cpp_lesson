/**
 * https://www.luogu.com.cn/problem/CF6A
 *
 * @File:   CF6A.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-02-12
 *
 */
#include <bits/stdc++.h>

using namespace std;

bool is_tr(int a, int b, int c)
{
    if (a + b > c && b + c > a && a + c > b)
        return true;
    return false;
}

bool is_s(int a, int b, int c)
{
    if (a + b >= c && b + c >= a && a + c >= b)
        return true;
    return false;
}

int main(void)
{
    int a, b, c, d;

    cin >> a >> b >> c >> d;

    if (is_tr(a, b, c) || is_tr(a, c, d) || is_tr(a, b, d) || is_tr(b, c, d))
    {
        cout << "TRIANGLE" << endl;
        return 0;
    }

    if (is_s(a, b, c) || is_s(a, c, d) || is_s(a, b, d) || is_s(b, c, d))
    {
        cout << "SEGMENT" << endl;
        return 0;
    }
    cout << "IMPOSSIBLE" << endl;
    return 0;
}

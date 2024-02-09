/**
 * https://www.luogu.com.cn/problem/B2620
 *
 * @File:   B2620.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-02-09
 *
 */
#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int a, b;

    cin >> a >> b;

    if (a > b)
        cout << 1;
    else
        cout << 0;

    cout << ' ';
    if (a <= b)
        cout << 1;
    else
        cout << 0;

    cout << ' ';
    if (a != b)
        cout << 1;
    else
        cout << 0;
    cout << endl;

    return 0;
}

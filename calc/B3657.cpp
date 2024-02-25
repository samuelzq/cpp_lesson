/**
 * https://www.luogu.com.cn/problem/B3657
 *
 * @File:   B3657.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-02-15
 *
 */
#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int x, y, p, sum;

    cin >> x >> y;
    p = min(x, y);
    sum = p * 90;
    x -= p;
    y -= p;
    sum += x * 60 + y * 40;
    cout << sum << endl;
    return 0;
}

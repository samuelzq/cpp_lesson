/**
 * https://www.luogu.com.cn/problem/B2029
 *
 * @File:   b2029.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-02-15
 *
 */
#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int h, r;
    double v;

    cin >> h >> r;
    v = 3.14 * h * r * r;
    cout << ceil(20 * 1000 / v) << endl;
    return 0;
}

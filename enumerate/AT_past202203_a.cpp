/**
 * https://www.luogu.com.cn/problem/AT_past202203_a
 *
 * @File:   AT_past202203_a.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-07-28
 *
 */
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int a, b, c;
    int maxn, minn;

    cin >> a >> b >> c;

    minn = maxn = a * b;

    int t = a * c;
    maxn = max(maxn, t);
    minn = min(minn, t);

    t = b * c;
    maxn = max(maxn, t);
    minn = min(minn, t);

    cout << minn << ' ' << maxn << endl;
    return 0;
}

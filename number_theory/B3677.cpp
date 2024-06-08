/**
 * https://www.luogu.com.cn/problem/B3677
 *
 * @File:   B3677.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-05-01
 *
 */
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    long long int y, t;

    cin >> y >> t;
    if ((t & 1) && (y < 0))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    if ((y & 1) || (t == 0))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}

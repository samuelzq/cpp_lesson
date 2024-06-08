/**
 * https://www.luogu.com.cn/problem/P8845
 *
 * @File:   P8845.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-05-30
 *
 */
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int t;

    cin >> t;
    while (t--) {
        int x, y;

        cin >> x >> y;
        if ((x == 1 && y == 2) ||
            (x == 2 && y == 1))
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}

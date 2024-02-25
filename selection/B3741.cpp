/**
 * https://www.luogu.com.cn/problem/B3741
 *
 * @File:   B3741.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-02-12
 *
 */
#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int a1, p1, a2, p2;

    cin >> a1 >> p1 >> a2 >> p2;

    if (a1 > a2)
    {
        cout << "\"\\n\"";
    }
    else if (a1 == a2)
    {
        if (p1 < p2)
            cout << "\"\\n\"";
        else
            cout << "\"\\t\"";
    }
    else
    {
        cout << "\"\\t\"";
    }
    cout << endl;
    return 0;
}

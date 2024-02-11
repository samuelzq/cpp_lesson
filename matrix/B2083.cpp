/**
 * https://www.luogu.com.cn/problem/B2083
 *
 * @File:   B2083.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-02-10
 *
 */
#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int a, b, f;
    char c;

    cin >> a >> b >> c >> f;

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b - 1; j++)
        {
            cout << ((f == 1 || i == 0 || i == a - 1 || j == 0 || j == b - 1) ? c : ' ');
        }
        cout << c << endl;
    }
    return 0;
}

/**
 * https://www.luogu.com.cn/problem/B3924
 *
 * @File:   B3924.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-02-09
 *
 */
#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int n;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << '|';
        for (int j = 0; j < n - 2; j++)
            cout << ((i == n / 2) ? '-' : 'a');
        cout << '|' << endl;
    }
    return 0;
}

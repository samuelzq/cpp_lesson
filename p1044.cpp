/**
 * https://www.luogu.com.cn/problem/P1044
 *
 * @File:   p1044.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-02-15
 *
 */
#include <bits/stdc++.h>

using namespace std;

int h[25] = {1, 1};

int main(void)
{
    int n;
    cin >> n;

    for (int i = 2; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
            h[i] += h[j - 1] * h[i - j];
    }
    cout << h[n] << endl;
    return 0;
}

/**
 * https://www.luogu.com.cn/problem/B3661
 *
 * @File:   B3661.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-02-11
 *
 */
#include <bits/stdc++.h>

using namespace std;

int o[10005];
int e[10005];

int main(void)
{
    int n, j, k;

    cin >> n;

    j = k = 0;
    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        if (t & 1)
            e[j++] = t;
        else
            o[k++] = t;
    }

    for (int i = 0; i < j - 1; i++)
        cout << e[i] << ' ';
    cout << e[j - 1] << endl;

    for (int i = 0; i < k - 1; i++)
        cout << o[i] << ' ';
    cout << o[k - 1] << endl;
    return 0;
}

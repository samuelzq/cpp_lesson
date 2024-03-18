/**
 * https://www.luogu.com.cn/problem/P1094
 *
 * @File:   P1094.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-02-26
 *
 */
#include <bits/stdc++.h>

using namespace std;

int a[30004];

int main(void)
{
    int n, w, g = 0;

    cin >> w >> n;

    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);

    int l, r;
    l = 0;
    r = n - 1;
    while (r > l)
    {
        if (a[r] + a[l] <= w)
        {
            r--;
            l++;
        }
        else
        {
            r--;
        }
        g++;
    }
    if (l == r)
        g++;
    cout << g << endl;
    return 0;
}

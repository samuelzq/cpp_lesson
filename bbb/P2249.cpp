/**
 * https://www.luogu.com.cn/problem/P2249
 *
 * @File:   P2249.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-03-01
 *
 */
#include <bits/stdc++.h>

using namespace std;

int a[1000006] = {0};

int main(void)
{
    int n, m;

    cin >> n >> m;
    for (int i = 0; i < n; i++)
        cin >> a[i];

    while (m--) {
        int q, l, r;
        l = 0;
        r = n - 1;
        cin >> q;
        while (l < r) {
            int mid = l + (r - l) / 2;

            if (a[mid] >= q)
                r = mid;
            else
                l = mid + 1;
        }

        if (a[l] == q)
            cout << l + 1;
        else
            cout << -1;
        if (m > 0)
            cout << ' ';
        else
            cout << endl;
    }
    return 0;
}

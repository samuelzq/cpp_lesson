/**
 * https://www.luogu.com.cn/problem/P1102
 *
 * @File:   P1102.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-03-02
 *
 */
#include <bits/stdc++.h>

using namespace std;

#define LL long long

LL a[200004];

LL lbound(LL d, int n)
{
    int l = 0;
    int r = n;

    while (l < r) {
        int mid = l + (r - l) / 2;
        if (d <= a[mid])
            r = mid;
        else
            l = mid + 1;
    }
    if (a[l] == d)
        return l;
    else
        return -1;
}

LL rbound(LL d, int n)
{
    int l = -1;
    int r = n - 1;

    while (l < r) {
        int mid = r - (r - l) / 2;
        if (d >= a[mid])
            l = mid;
        else
            r = mid - 1;
    }
    if (a[r] == d)
        return r;
    else
        return -1;
}

int main(void)
{
    int n, c;
    LL cnt;

    cin >> n >> c;

    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);

    cnt = 0;
    for (int i = 0; i < n;) {
        LL d, x, y = 0;
        d = a[i];
        x = rbound(d, n);
        x = x - i + 1;

        i += x;
        y = lbound(d + c, n);
        if (y == -1) {
            continue;
        }

        int z = rbound(d + c, n);
        z = z - y + 1;
        cnt += x * z;
    }
    cout << cnt << endl;
    return 0;
}

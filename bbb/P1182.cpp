/**
 * https://www.luogu.com.cn/problem/P1182
 *
 * @File:   P1182.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-04-01
 *
 */
#include <bits/stdc++.h>

using namespace std;

int n, m;
int a[100005];

bool fine(unsigned long long s)
{
    int t, cnt;

    t = cnt = 0;
    for (int i = 0; i < n; i++) {
        if (t + a[i] <= s) {
            t += a[i];
        } else {
            t = a[i];
            cnt++;
        }
    }
    cnt++;
    //cout << cnt << endl;
    return cnt <= m;
}

int main(void)
{
    unsigned long long l, r, maxa, ans;

    cin >> n >> m;
    l = 1;
    maxa = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (maxa < a[i])
            maxa = a[i];
    }
    l = maxa;
    r = n / m * maxa + maxa;

    while (l <= r) {
        int mid = l + (r - l) / 2;
        //cout << l << ' ' << mid << ' ' << r << endl;
        if (fine(mid)) {
            ans = mid;
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }

    cout << ans << endl;
    return 0;
}

/**
 *
 * @File:   P2678.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-03-30
 *
 */
#include <bits/stdc++.h>

using namespace std;

int l, n, m, d[50005];

// 根据当前距离，判断需要移除的石头个数是否满足要求
int fine(int g)
{
    int p, j, c = 0;

    j = 0;
    for (int i = 1; i <= n + 1; i++) {
        p = d[i] - d[j];
        if (p < g) // 间距小了，需要移除当前石头
            c++;
        else   // 距离足够，保留当前石头，更新上一跳的位置
            j = i;
    }

    return c <= m;
}

int main(void)
{
    int ll, rr, mid, ans;
    cin >> l >> n >> m;

    d[0] = 0;
    d[n + 1] = l;
    for (int i = 1; i <= n; i++) {
        cin >> d[i];
    }

    ll = 0;
    rr = l;
    ans = 0;
    while (ll <= rr) {
        mid = ll + (rr - ll) / 2;

        if (fine(mid)) {  // 距离可能满足
            ans = mid;
            ll = mid + 1;
        }
        else // 距离太大
            rr = mid - 1;
    }
    cout << ans << endl;
    return 0;
}

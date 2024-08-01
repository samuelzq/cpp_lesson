/**
 * https://www.luogu.com.cn/problem/P2637
 *
 * @File:   P2637.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-07-28
 *
 */
#include <bits/stdc++.h>
using namespace std;

int a[1010] = {0};

int main(void)
{
    int n, m, maxn, maxc;

    cin >> n >> m;

    for (int i = 0; i < m; i++)
        cin >> a[i];

    // 将出价按升序排序后，遍历每种出价可以获得多少收入
    sort(a, a + m);
    maxn = 0;
    for (int i = 0; i < m; i++) {
       int t = m - i;

        t = min(n, t);  // 注意：客户的数量可能多于待售的草料
        if (maxn < a[i] * t) {
            maxn = a[i] * t;
            maxc = a[i];
        }
    }
    cout << maxc << ' ' << maxn << endl;
    return 0;
}

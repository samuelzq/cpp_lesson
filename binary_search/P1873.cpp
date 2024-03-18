/**
 * https://www.luogu.com.cn/problem/P1873
 *
 * @File:   P1873.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-03-18
 *
 */
#include <bits/stdc++.h>

using namespace std;

#define LL long long
int n, m;
LL a[1000006];

bool enough(LL h)
{
    LL s = 0;
    for (int i = 0; i < n; i++)
        s += (h < a[i]) ? (a[i] - h) : 0;
    return s >= m;
}

LL binary_search(LL l, LL r)
{
    LL mid, ans;

    while (l <= r) {
        mid = l + (r - l) / 2;
        if (enough(mid)) {
            ans = mid;
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
    return ans;
}

int main(void)
{
    cin >> n >> m;

    cin >> a[0];
    for (int i = 1; i < n; i++) {
        cin >> a[i];
    }

    cout << binary_search(0, 1e9) << endl;
    return 0;
}

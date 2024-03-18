/**
 * https://www.luogu.com.cn/problem/P4995
 *
 * @File:   P4005.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-02-26
 *
 */
#include <bits/stdc++.h>

using namespace std;

int a[303];

#define POWER2(x)   ((x) * (x))

int main(void)
{
    int n;
    int r, l;
    long long sum;

    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);

    r = n - 1;
    l = 0;
    // 先跳到最高的，然后在剩下的最矮和最高之间来回跳
    sum = POWER2(a[r]);
    while (r - l > 1)
    {
        sum += POWER2(a[r] - a[l]);
        r--;
        sum += POWER2(a[r] - a[l]);
        l++;
    }
    sum += POWER2(a[r] - a[l]);
    cout << sum << endl;
    return 0;
}

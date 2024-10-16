/**
 * https://www.luogu.com.cn/problem/P1678
 *
 * @File:   P1678.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-03-24
 *
 */
#include <bits/stdc++.h>

using namespace std;

int a[100005];
int n, m;

int main(void)
{
    int l, r;
    unsigned long long sum;
    cin >> n >> m;

    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(a, a + n);

    sum = 0;
    for (int i = 0; i < m; i++) {
        int b;
        cin >> b;

        if (b >= a[n - 1]) {
            sum += b - a[n - 1];
            continue;
        }

        if (b <= a[0]) {
            sum += a[0] - b;
            continue;
        }
        l = 0;
        r = n - 1;
        while (l < r) {
            int mid = l + (r - l) / 2;
            if (b < a[mid]) {
                r = mid - 1;
            } else if (b > a[mid]) {
                l = mid + 1;
            } else {
                l = mid;
                break;
            }
        }

        int d1, d2;
        if (a[l] > b) {
            d1 = a[l] - b;
            d2 = b - a[l - 1];
        } else if (a[l] < b) {
            d1 = b - a[l];
            d2 = a[l + 1] - b;
        } else {
            d1 = d2 = 0;
        }
        sum += min(d1, d2);
        //cout << b << ' ' << a[l] << endl;
    }

    cout << sum << endl;
    return 0;
}

/**
 * https://www.luogu.com.cn/problem/P4447
 *
 * @File:   P4447.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-02-26
 *
 */
#include <bits/stdc++.h>

using namespace std;

#define MAXN 100005

int a[MAXN] = {0}, s[MAXN] = {0}, q[MAXN] = {0};

int main(void)
{
    int n, g, cnt;

    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(a, a + n);
    g = 0;
    for (int i = 0; i < n; i++)
    {
        int j = lower_bound(q, q + g, a[i]) - q;

        while (q[j] == a[i] && j < g)
            j++;

        if (j == 0 && a[i] < q[0])
        {
            q[g] = a[i] + 1;
            s[g] = 1;
            g++;
        }
        else if (q[j - 1] == a[i])
        {
            q[j - 1] = a[i] + 1;
            s[j - 1]++;
        }
        else
        {

            q[g] = a[i] + 1;
            s[g] = 1;
            g++;
        }
    }
    cnt = s[0];
    for (int i = 1; i < g; i++)
        cnt = min(cnt, s[i]);
    cout << cnt << endl;
    return 0;
}

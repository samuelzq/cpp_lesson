/**
 *
 * @File:   B3827.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-02-15
 *
 */
#include <bits/stdc++.h>

using namespace std;

struct paper {
    double ave;
    int idx;
} a[110];

bool cmp(struct paper &p1, struct paper &p2)
{
    if (p1.ave == p2.ave)
        return p1.idx < p2.idx;
    else
        return p1.ave > p2.ave;
}

int main(void)
{
    int n, k, t;

    cin >> n >> k;

    for (int i = 0; i < n; i++)
    {
        t = 0;
        for (int j = 0; j < k; j++)
        {
            int b;
            cin >> b;
            t += b;
        }
        a[i].ave = 1.0 * t / k;
        a[i].idx = i + 1;
    }
    sort(a, a + n, cmp);
    cout << a[0].idx << '\n' << a[1].idx << endl;
    return 0;
}

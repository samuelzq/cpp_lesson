/**
 * https://www.luogu.com.cn/problem/P1478
 *
 * @File:   P1478.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-02-25
 *
 */
#include <bits/stdc++.h>

using namespace std;

struct apple {
    int x, y;
} aa[5005];

bool cmp(struct apple &a1, struct apple &a2)
{
    return a1.y < a2.y;
}

int main(void)
{
    int n, s, a, b, cnt;

    cin >> n >> s >> a >> b;

    for (int i = 0; i < n; i++)
        cin >> aa[i].x >> aa[i].y;

    sort(aa, aa + n, cmp);

    cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (s == 0)
            break;
        if (a + b >= aa[i].x && s >= aa[i].y)
        {
            s -= aa[i].y;
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}

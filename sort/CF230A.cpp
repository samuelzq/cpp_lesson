/**
 * https://www.luogu.com.cn/problem/CF230A
 *
 * @File:   CF230A.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-02-11
 *
 */
#include <bits/stdc++.h>

using namespace std;

struct dragon {
    int power;
    int blood;
} d[1003];

bool cmpd(struct dragon &d1, struct dragon &d2)
{
    return d1.power < d2.power;
}

int main(void)
{
    int s, n;

    cin >> s >> n;
    for (int i = 0; i < n; i++)
        cin >> d[i].power >> d[i].blood;
    sort(d, d + n, cmpd);

    for (int i = 0; i < n; i++)
    {
        if (s <= d[i].power)
        {
            cout << "NO" << endl;
            return 0;
        }
        s += d[i].blood;
    }
    cout << "YES" << endl;
    return 0;
}

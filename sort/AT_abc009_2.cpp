/**
 * https://www.luogu.com.cn/problem/AT_abc009_2
 *
 * @File:   AT_abc009_2.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-02-11
 *
 */
#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int n, s, m;

    cin >> n;

    s = m = -1;
    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        if (t > m)
        {
            s = m;
            m = t;
        }
        if (t > s && t != m)
            s = t;
    }
    if (s == -1)
        s = m;
    cout << s << endl;
    return 0;
}

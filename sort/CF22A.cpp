/**
 * https://www.luogu.com.cn/problem/CF22A
 *
 * @File:   CF22A.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-02-12
 *
 */
#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int n, m, s;

    cin >> n;
    m = s = 300;

    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;

        if (t < m)
        {
            s = m;
            m = t;
        }
        if (t < s && t != m)
            s = t;
    }
    if (s == 300)
        cout << "NO" << endl;
    else
        cout << s << endl;
    return 0;
}

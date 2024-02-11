/**
 * https://www.luogu.com.cn/record/146638097
 *
 * @File:   B2140.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-02-10
 *
 */
#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int n, a, b;

    cin >> n;
    a = b = 0;
    for (int i = 1; i <= n; i++)
    {
        int o, z, t;
        o = z = 0;
        t = i;
        while (t)
        {
            if (t & 1)
                o++;
            else
                z++;
            t >>= 1;
        }
        if (o > z)
            a++;
        else
            b++;
    }
    cout << a << ' ' << b << endl;
    return 0;
}

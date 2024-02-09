/**
 * https://www.luogu.com.cn/problem/B3756
 *
 * @File:   B3756.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-02-09
 *
 */
#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int a, b, cnt;

    cin >> a >> b;
    cnt = 0;

    for (int i = a; i <= b; i++)
    {
        int t;
        bool l = true;

        t = i;
        while (t)
        {
            if (!(t % 5))
            {
                l = false;
                break;
            }
            t /= 5;
        }
        if (!l)
            continue;

        l = true;
        t = i;
        while (t)
        {
            if (!(t % 7))
            {
                l = false;
                break;
            }
            t /= 7;
        }
        if (!l)
            continue;

        l = true;
        t = i;
        while (t)
        {
            if (!(t % 9))
            {
                l = false;
                break;
            }
            t /= 9;
        }
        if (!l)
            continue;
        cnt++;
    }
    cout << cnt << endl;
    return 0;
}


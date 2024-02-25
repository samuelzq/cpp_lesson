/**
 * https://www.luogu.com.cn/problem/CF155A
 *
 * @File:   CF155A.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-02-12
 *
 */
#include <iostream>

using namespace std;

int main(void)
{
    int n, cnt, t, maxn, minx;

    cin >> n;
    cin >> t;

    cnt = 0;
    maxn = minx = t;
    for (int i = 1; i < n; i++)
    {
        cin >> t;
        if (t > maxn)
        {
            maxn = t;
            cnt++;
        }
        else if (t < minx)
        {
            minx = t;
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}

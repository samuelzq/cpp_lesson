/**
 * https://www.luogu.com.cn/problem/CF386A
 *
 * @File:   CF386A.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-02-11
 *
 */
#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int n, idx;
    int m = -1, s = -1;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;

        if (t > m)
        {
            idx = i;
            s = m; // 缓存前一个较大的数
            m = t; // 更新最大的数
        }
        if (t > s && m != t)
            s = t;  // 第二个较大的值
    }

    if (s == -1)
        s = m;
    cout << idx + 1 << ' ' << s << endl;
    return 0;
}

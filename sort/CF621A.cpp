/**
 * https://www.luogu.com.cn/problem/CF621A
 *
 * @File:   CF621A.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-02-11
 *
 */
#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    long long int n, o, sum, mine;

    cin >> n;
    o = sum = 0;
    mine = 10000000009;
    for (int i = 0; i < n; i++)
    {
        long long int t;
        cin >> t;
        if (t & 1)
        {
            // 记录最小的奇数和奇数的总数
            mine = min(mine, t);
            o++;
        }
        sum += t;
    }
 //   cout << sumo << ' ' << sum << endl;
    if (o & 1)
        cout << sum - mine;
    else
        cout << sum;
    cout << endl;
    return 0;
}

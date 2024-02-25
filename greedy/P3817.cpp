/**
 * https://www.luogu.com.cn/problem/P3817
 *
 * @File:   P3817.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-02-25
 *
 */
#include <bits/stdc++.h>

using namespace std;

int a[100005];

int main(void)
{
    int n, x;
    long long sum;

    cin >> n >> x;

    for (int i = 0; i < n; i++)
        cin >> a[i];

    sum = 0;

    // 如果当前和前一个盒子里糖果的总数超出限制，则减少当前盒子里的糖果
    if (a[0] > x)
    {
        sum = a[0] - x;
        a[0] = x;
    }
    for (int i = 1; i < n; i++)
    {
        int t;
        if (a[i] + a[i - 1] > x)
        {
            t = a[i] + a[i - 1] - x;
            sum += t;
            a[i] -= t;
        }
    }

    cout << sum << endl;
    return 0;
}

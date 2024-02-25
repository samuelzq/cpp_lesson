/**
 * https://www.luogu.com.cn/problem/CF1017A
 *
 * @File:   CF1017A.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-02-11
 *
 */
#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int n, rank, sum;
    int a, b, c, d;

    cin >> n;
    rank = sum = 0;
    cin >> a >> b >> c >> d;
    sum = a + b + c + d;
    rank = 1;
    for (int i = 1; i < n; i++)
    {
        int t;
        cin >> a >> b >> c >> d;
        t = a + b + c + d;
        if (t > sum)
            rank++;
    }
    cout << rank << endl;
    return 0;
}

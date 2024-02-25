/**
 * https://www.luogu.com.cn/problem/P5019
 *
 * @File:   P5019.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-02-25
 *
 */
#include <bits/stdc++.h>

using namespace std;

int a[100005] = {0};

int main(void)
{
    int n, cnt;

    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];

    cnt = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] > a[i - 1])
            cnt += a[i] - a[i - 1];
    }
    cout << cnt << endl;
    return 0;
}

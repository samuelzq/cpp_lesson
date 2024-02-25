/**
 * https://www.luogu.com.cn/problem/B3839
 *
 * @File:   B3839.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-02-14
 *
 */
#include <bits/stdc++.h>

using namespace std;

int sum(int n)
{
    int ret = 0;

    for (int i = 1; i <= n; i++)
        ret += i;

    return ret;
}

int main(void)
{
    int n;
    int cnt;

    cin >> n;
    cnt = 0;
    for (int i = 1; i <= n; i++)
        cnt += sum(i);
    cout << cnt << endl;
    return 0;
}

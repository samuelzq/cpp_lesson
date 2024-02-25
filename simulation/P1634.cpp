/**
 * https://www.luogu.com.cn/problem/P1634
 *
 * @File:   P1634.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-02-16
 *
 */
#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    long long int x, n, cnt;

    cin >> x >> n;
    cnt = 1;
    for (int i = 0; i < n; i++)
        cnt += cnt * x;
    cout << cnt << endl;
    return 0;
}

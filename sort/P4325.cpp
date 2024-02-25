/**
 * https://www.luogu.com.cn/problem/P4325
 *
 * @File:   P4325.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-02-12
 *
 */
#include <bits/stdc++.h>

using namespace std;

int a[11];

int main(void)
{
    int cnt;

    cnt = 0;
    for (int i = 1; i <= 10; i++)
    {
        int n;
        cin >> n;
        a[i] = n % 42;
    }
    sort(a, a + 11);

    a[0] = -1;
    for (int i = 1; i <= 10; i++)
    {
        if (a[i] != a[i - 1])
            cnt++;
    }
    cout << cnt << endl;
    return 0;
}

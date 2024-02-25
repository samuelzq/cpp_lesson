/**
 * https://www.luogu.com.cn/problem/CF405A
 *
 * @File:   CF405A.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-02-11
 *
 */
#include <bits/stdc++.h>

using namespace std;

int a[110];

int main(void)
{
    int n;

    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(a, a + n);

    for (int i = 0; i < n - 1; i++)
        cout << a[i] << ' ';
    cout << a[n - 1] << endl;
    return 0;
}

/**
 * https://www.luogu.com.cn/problem/P1088
 *
 * @File:   P1088.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-03-18
 *
 */
#include <bits/stdc++.h>

using namespace std;

int a[10004];

int main(void)
{
    int n, m;

    cin >> n >> m;

    for (int i = 0; i < n; i++)
        cin >> a[i];

    while (m--)
        next_permutation(a, a + n);

    for (int i = 0; i < n - 1; i++)
        cout << a[i] << ' ';
    cout << a[n - 1] << endl;
    return 0;
}

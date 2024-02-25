/**
 * https://www.luogu.com.cn/problem/CF984A
 *
 * @File:   CF984A.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-02-11
 *
 */
#include <bits/stdc++.h>

using namespace std;

int a[1004];

int main(void)
{
    int n;

    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);

    cout << a[(n - 1) / 2] << endl;
    return 0;
}

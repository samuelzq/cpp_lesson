/**
 * https://www.luogu.com.cn/problem/P9517
 *
 * @File:   P9517.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-07-27
 *
 */
#include <bits/stdc++.h>
using namespace std;

int a[100005] = {0};

int main(void)
{
    int n, l, r;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (l = 0; l < n; l++) {
        if (a[l])   // 找到最左边的1
            break;
    }

    for (r = n - 1; r >= l; r--) {
        if (a[r])  // 找到最右边的1
            break;
    }

    if (r < l)
        cout << 0 << endl;
    else
        cout << r - l + 1 << endl;
    return 0;
}

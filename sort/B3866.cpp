/**
 * https://www.luogu.com.cn/problem/B3866
 *
 * @File:   B3866.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-05-05
 *
 */
#include <bits/stdc++.h>
using namespace std;

int a[3];

int main(void)
{
    int n, x, y, cnt;

    cin >> n;
    cnt = 0;
    while (n != 495) {
        a[0] = n % 10;
        a[1] = (n / 10) % 10;
        a[2] = n / 100;

        sort(a, a + 3);
        x = a[2] * 100 + a[1] * 10 + a[0];
        y = a[0] * 100 + a[1] * 10 + a[2];
        n = x - y;
        cnt++;
    }
    cout << cnt << endl;
    return 0;
}

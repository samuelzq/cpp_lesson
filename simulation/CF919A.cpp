/**
 * https://www.luogu.com.cn/problem/CF919A
 *
 * @File:   CF919A.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-02-11
 *
 */
#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int n, m;
    double price = 99999999;

    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;

        price = min(price, 1.0 * a / b);
    }
    cout << setprecision(10) << m * price << endl;
    return 0;
}

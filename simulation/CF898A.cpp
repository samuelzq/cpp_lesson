/**
 * https://www.luogu.com.cn/problem/CF898A
 *
 * @File:   CF898A.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-03-02
 *
 */
#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int n, d;

    cin >> n;

    d = n % 10;
    if (d < 5)
        cout << n - d;
    else
        cout << n - d + 10;
    cout << endl;
    return 0;
}

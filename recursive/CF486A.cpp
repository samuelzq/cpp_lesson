/**
 * https://www.luogu.com.cn/problem/CF486A
 *
 * @File:   CF486A.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-06-14
 *
 */
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    long long int n, f;

    cin >> n;

    if (n & 1)
        f = -1 * n + n / 2;
    else
        f = n / 2;
    cout << f << endl;
    return 0;
}

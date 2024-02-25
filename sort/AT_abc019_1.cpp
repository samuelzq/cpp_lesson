/**
 * https://www.luogu.com.cn/problem/AT_abc019_1
 *
 * @File:   AT_abc019_1.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-02-11
 *
 */
#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int a, b, c;

    cin >> a >> b >> c;

    if ((a <= b && b <= c) || (c <= b && b <= a))
        cout << b;
    else if ((b <= c && c <= a) || (a <= c && c <= b))
        cout << c;
    else
        cout << a;
    cout << endl;
    return 0;
}

/**
 * https://www.luogu.com.cn/problem/P1936
 *
 * @File:   P1936.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-06-14
 *
 */
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int k, f1, f2, f;

    cin >> k;

    // m和n是斐波那契数列中相邻的两个数
    f = f1 = f2 = 1;
    while (f1 + f2 <= k) {
        f = f1 + f2;
        f1 = f2;
        f2 = f;
    }
    cout << "m=" << f1 << endl;
    cout << "n=" << f2 << endl;
    return 0;
}

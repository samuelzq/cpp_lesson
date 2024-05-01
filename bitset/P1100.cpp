/**
 * https://www.luogu.com.cn/problem/P1100
 *
 * @File:   P1100.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-04-14
 *
 */
#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    unsigned int n, m;
    cin >> n;
    m = ((n & 0xffff) << 16) | (n >> 16);
    cout << m << endl;
    return 0;
}

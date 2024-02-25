/**
 * https://www.luogu.com.cn/problem/P1010
 *
 * @File:   P1010.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-02-18
 *
 */
#include <bits/stdc++.h>

using namespace std;

bool f = false;

// 1 和 2 比较特殊，直接输出不需要继续分级了。
// dfs函数输入的是二进制中2的幂指数
void dfs(int n)
{
    if (n == 1)
    {
        cout << 2;
        return;
    }

    if (n == 0)
    {
        cout << "2(0)";
        return;
    }

    int t, bits;
    t = n;
    bits = 0;

    cout << "2(";
    while (t >>= 1)
        bits++;
    dfs(bits);
    for (int i = bits - 1; i >= 0; i--)
    {
        if (n & (1 << i))
        {
            cout << "+";
            dfs(i);
        }
    }
    cout << ')';
}

int main(void)
{
    int n;

    cin >> n;
    int t, bits;
    t = n;
    bits = 0;

    while (t >>= 1)
        bits++;
    dfs(bits);

    for (int i = bits - 1; i >= 0; i--)
    {
        if (n & (1 << i))
        {
            cout << "+";
            dfs(i);
        }
    }
    return 0;
}

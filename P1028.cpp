/**
 * https://www.luogu.com.cn/problem/P1028
 *
 * @File:   P1028.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-02-15
 *
 */
#include <bits/stdc++.h>

using namespace std;

int cnt = 0;
int f[1005] = {1, 1, 2,2,4,4};

int dfs(int l)
{
    int t = 0;
    if (f[l]) // 剪枝
        return f[l];

    // 当前数列尾部可追加的数据种类
    for (int i = 1; i <= l / 2; i++)
        t += dfs(i);
    f[l] = t + 1;
    return f[l];
}

int main(void)
{
    int n;

    cin >> n;
    dfs(n);
   // cout << endl;
    cout << f[n] << endl;
    return 0;
}

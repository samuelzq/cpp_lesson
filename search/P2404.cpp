/**
 * https://www.luogu.com.cn/problem/P2404
 *
 * @File:   P2404.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-04-23
 *
 */
#include <bits/stdc++.h>

using namespace std;
int a[9];

// s: 上一个分拆出的值
// n：剩余的数值
// d： 已经分出了多少的数
void dfs(int s, int n, int d)
{
    if (n <= 0) { // 没有剩余，输出分拆结果
        for (int i = 0; i < d; i++) {
            cout << a[i] << '+';
        }
        cout << s << endl;
        return;
    }

    //cout << d << ':' << s << '-' << n << endl;
    for (int i = s; i <= n; i++) {  // 从s开始拆
        if (n - i >= i) { // 剩余的n还可以拆
            a[d] = i;
            dfs(i, n - i, d + 1);
        } else { // 剩余的数不能够再分拆了
            dfs(n, 0, d);
            break;
        }
    }
    return;
}

int main()
{
    int n;

    cin >> n;
    for (int i = 1; i <= (n + 1) / 2; i++) {  // 其实值不能超过n的一半
        a[0] = i;
        if (n - i >= i)
            dfs(i, n - i, 1);
    }
    return 0;
}

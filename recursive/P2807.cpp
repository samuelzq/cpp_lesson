/**
 * https://www.luogu.com.cn/problem/P2807
 *
 * @File:   P2807.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-06-14
 *
 */
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int t;

    cin >> t;
    while (t--) {
        int n, cnt;
        cin >> n;
        cnt = 0;
        for (int i = 1; i <= n; i++) {
            // 每多一个分割，等于多了一层长度为1的三角形
            // 然后依次统计新增加的不同长度的三角形的数量
            for (int j = 1; j <= i; j++) {
                cnt += i - (j - 1);  // 正放的边长j的三角形的数量
                if (i + 1 > 2 * j)   // 刀放的边长j的三角形的数量
                    cnt += i - j - (j - 1);
            }
        }
        cout << cnt << endl;
    }
    return 0;
}

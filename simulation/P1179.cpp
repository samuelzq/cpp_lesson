/**
 * https://www.luogu.com.cn/problem/P1179
 *
 * @File:   P1179.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-03-02
 *
 */
#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int l, r, cnt;

    cin >> l >> r;

    cnt = 0;
    for (int i = l; i <= r; i++) {
        string s = to_string(i);

        for (char c : s) {
            if (c == '2')
                cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}

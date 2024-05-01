/**
 * https://www.luogu.com.cn/problem/AT_abc073_c
 *
 * @File:   AT_abc073_c.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-04-19
 *
 */
#include <bits/stdc++.h>

using namespace std;

map<int, int> m;

int main(void)
{
    int n, cnt;

    cin >> n;

    while (n--) {
        int a;
        cin >> a;

        if (m.find(a) == m.end())
            m[a] = 1;
        else {
            if (m[a] == 1)
                m[a] = 0;
            else
                m[a] = 1;
        }
    }

    cnt = 0;

    for (auto ai : m) {
        if (ai.second)
            cnt++;
    }
    cout << cnt << endl;
    return 0;
}

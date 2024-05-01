/**
 * https://www.luogu.com.cn/problem/P1135
 *
 * @File:   P1135.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-04-04
 *
 */
#include <bits/stdc++.h>

using namespace std;

int n, a, b;
int e[203] = {0};
int c[203] = {0};

int main(void)
{
    queue<int> q;

    cin >> n >> a >> b;
    for (int i = 1; i <= n; i++)
        cin >> e[i];

    q.push(a);
    c[a] = 0;
    while (!q.empty()) {
        int s = q.front();
        q.pop();

        if (s == b) {
            cout << c[s] << endl;
            return 0;
        }

        if (s + e[s] <= n && !c[s + e[s]]) {
            q.push(s + e[s]);
            c[s + e[s]] = c[s] + 1;
        }

        if (s - e[s] > 0 && !c[s - e[s]]) {
            q.push(s - e[s]);
            c[s - e[s]] = c[s] + 1;
        }
    }
    cout << -1 << endl;
    return 0;
}

/**
 * https://www.luogu.com.cn/problem/P1208
 *
 * @File:   P1208.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-02-26
 *
 */
#include <bits/stdc++.h>

using namespace std;

struct cow {
    int a, c;
} c[2000006];

bool cmp(struct cow &c1, struct cow &c2)
{
    return c1.a < c2.a;
}

int main(void)
{
    int n, m;

    cin >> n >> m;
    for (int i = 0; i < m; i++)
        cin >> c[i].a >> c[i].c;

    sort(c, c + m, cmp);
    int sum = 0;
    for (int i = 0; i < m; i++)
    {
        if (!n)
            break;
        if (n >= c[i].c)
        {
            n -= c[i].c;
            sum += c[i].c * c[i].a;
        }
        else
        {
            sum += n * c[i].a;
            n = 0;
        }
    }
    cout << sum << endl;
    return 0;
}

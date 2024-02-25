/**
 * https://www.luogu.com.cn/problem/P7614
 *
 * @File:   P7614.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-02-12
 *
 */
#include <bits/stdc++.h>

using namespace std;

struct num {
    int val;
    int idx;
} n[8];

int a[8];

bool cmp(struct num &n1, struct num &n2)
{
    return n1.val > n2.val;
}

int main(void)
{
    int s = 0;
    for (int i = 0; i < 8; i++)
    {
        cin >> n[i].val;
        n[i].idx = i + 1;
    }
    sort(n, n + 8, cmp);

    for (int i = 0; i < 5; i++)
    {
        s += n[i].val;
        a[i] = n[i].idx;
    }
    sort(a, a + 5);

    cout << s << endl;
    for (int i = 0; i < 4; i++)
        cout << a[i] << ' ';
    cout << a[4] << endl;
    return 0;
}

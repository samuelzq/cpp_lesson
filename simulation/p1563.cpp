/**
 * https://www.luogu.com.cn/problem/P1563
 *
 * @File:   p1563.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2023-12-25
 *
 */
#include <iostream>

using namespace std;

struct node {
    int face;
    string name;
} nn[100005];

int main(void)
{
    int n, m, p;

    cin >> n >> m;

    for (int i = 0; i < n; i++)
        cin >> nn[i].face >> nn[i].name;

    p = 0;
    for (int i = 0; i < m; i++)
    {
        int a, s;
        cin >> a >> s;
        if (nn[p].face == 0 && a == 0)
            p = (n + p - s) % n;
        else if (nn[p].face == 0 && a == 1)
            p = (p + s) % n;
        else if (nn[p].face == 1 && a == 0)
            p = (p + s) % n;
        else
            p = (n + p - s) % n;
    }

    cout << nn[p].name << endl;
    return 0;
}

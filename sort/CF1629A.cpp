/**
 * https://www.luogu.com.cn/problem/CF1629A
 *
 * @File:   CF1629A.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-02-11
 *
 */
#include <bits/stdc++.h>

using namespace std;

struct prog {
    int run;
    int ret;
} p[110];

bool cmp_p(struct prog &p1, struct prog &p2)
{
    return p1.run < p2.run;
}

int main(void)
{
    int t;

    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;
        for (int i = 0; i < n; i++)
            cin >> p[i].run;
        for (int i = 0; i < n; i++)
            cin >> p[i].ret;

        // 首先按运行时RAM的升序对程序排序
        sort(p, p + n, cmp_p);

        for (int i = 0; i < n; i++)
        {
            if (k < p[i].run)  // 当前RAM大小无法运行该程序
                break;
            k += p[i].ret;  // 程序运行后内存大小得以提升
        }
        cout << k << endl;
    }
    return 0;
}


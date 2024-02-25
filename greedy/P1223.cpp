/**
 * https://www.luogu.com.cn/problem/P1223
 *
 * @File:   P1223.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-02-25
 *
 */
#include <bits/stdc++.h>

using namespace std;

struct student {
    int t;
    int i;
} stu[1005];

bool cmp(struct student &s1, struct student &s2)
{
    return s1.t < s2.t;
}

int main(void)
{
    int n;
    long long sum;

    cin >> n;
    // 按接水时间升序排序
    for (int i = 0; i < n; i++)
    {
        cin >> stu[i].t;
        stu[i].i = i + 1;
    }
    sort(stu, stu + n, cmp);
    sum = 0;
    cout << stu[0].i;
    for (int i = 1; i < n; i++)
    {
        cout << ' ' << stu[i].i;
        sum += (n - i) * stu[i - 1].t;
    }
    cout << endl << fixed << setprecision(2) << 1.0 * sum / n << endl;
    return 0;
}

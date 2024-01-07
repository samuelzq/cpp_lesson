/**
 * https://www.luogu.com.cn/problem/P1104
 *
 * @File:   p1104.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2023-12-30
 *
 */
#include <bits/stdc++.h>

using namespace std;

struct student {
    char name[32];
    int y, m, d;
    int idx;
} stu[120];

bool cmp(struct student &st1, struct student &st2)
{
    if (st1.y != st2.y)
        return st1.y < st2.y;
    else if (st1.m != st2.m)
        return st1.m < st2.m;
    else if (st1.d != st2.d)
        return st1.d < st2.d;
    else
        return st1.idx > st2.idx;
}

int main(void)
{
    int n;

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%s %d %d %d", stu[i].name, &stu[i].y, &stu[i].m, &stu[i].d);
        stu[i].idx = i;
    }

    sort(stu, stu + n, cmp);

    for (int i = 0; i < n; i++)
        printf("%s\n", stu[i].name);
    return 0;
}

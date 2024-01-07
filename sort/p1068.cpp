/**
 * https://www.luogu.com.cn/problem/p1068
 *
 * @File:   p1068.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2023-12-30
 *
 */
#include <bits/stdc++.h>

using namespace std;

struct student {
    int id;
    int grade;
} stu[50005];

bool cmp_stu(struct student &st1, struct student &st2)
{
    if (st1.grade == st2.grade)
        return st1.id < st2.id;
    return st1.grade > st2.grade;
}

int main(void)
{
    int n, m, i;

    scanf("%d %d", &n, &m);
    for (i = 0; i < n; i++)
    {
        scanf("%d %d", &stu[i].id, &stu[i].grade);
    }
    sort(stu, stu + n, cmp_stu);
    m *= 1.5;
    m = min(m, n);
    for (i = m - 1; i < n; i++)
    {
        if (stu[i].grade < stu[m - 1].grade)
            break;
    }
    printf("%d %d\n", stu[i - 1].grade, i);
    m = i;
    for (int i = 0; i < m; i++)
        printf("%d %d\n", stu[i].id, stu[i].grade);
    return 0;
}

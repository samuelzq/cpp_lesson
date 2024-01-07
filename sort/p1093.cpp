/**
 * https://www.luogu.com.cn/problem/P1093
 *
 * @File:   p1093.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2023-12-29
 *
 */
#include <bits/stdc++.h>

using namespace std;

struct student {
    int chinese;
    int math;
    int english;
    int total;
    int id;
} stu[303] = {0};

bool comp_student(struct student &s1, struct student &s2)
{
    if (s1.total == s2.total)
    {
        if (s1.chinese == s2.chinese)
            return s1.id < s2.id;
        else
            return s1.chinese > s2.chinese;
    }
    else
        return (s1.total > s2.total);
}

int main(void)
{
    int n;

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d %d", &stu[i].chinese, &stu[i].math, &stu[i].english);
        stu[i].id = i + 1;
        stu[i].total = stu[i].chinese + stu[i].math + stu[i].english;
    }
    sort(stu, stu + n, comp_student);

    for (int i = 0; i < 5 && i < n; i++)
    {
        printf("%d %d\n", stu[i].id, stu[i].total);
    }
    return 0;
}

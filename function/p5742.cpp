/**
 * https://www.luogu.com.cn/problem/P5742
 *
 * @File:   p5742.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2023-12-24
 *
 */
#include <bits/stdc++.h>

struct student{
    int no;
    int g1;
    int g2;
    int g3;

    student(int _no, int _g1, int _g2)
    {
        this->no = _no;
        this->g1 = _g1;
        this->g2 = _g2;
        this->g3 = _g1 * 7 + _g2 * 3;
    }

    int total()
    {
        return g1 + g2;
    }
};

bool is_excellent(struct student &stu)
{
    if (stu.total() > 140 && stu.g3 >= 800)
        return true;

    return false;
}

int main(void)
{
    int n;

    scanf("%d", &n);

    while (n--)
    {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        struct student stu(a, b, c);
        if (is_excellent(stu))
            printf("Excellent\n");
        else
            printf("Not excellent\n");
    }
    return 0;
}

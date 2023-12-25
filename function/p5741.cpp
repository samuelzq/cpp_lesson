/**
 * https://www.luogu.com.cn/problem/P5741
 *
 * @File:   p5741.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2023-12-24
 *
 */
#include <iostream>
#include <cmath>
#include <cstring>

struct student {
    char name[9];
    int chinese;
    int math;
    int english;
} stu[1009];

int main(void)
{
    int n;

    memset(stu, 0, sizeof(struct student));
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%s %d %d %d", stu[i].name, &stu[i].chinese, &stu[i].math, &stu[i].english);

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int a, b;
            a = stu[i].chinese + stu[i].math + stu[i].english;
            b = stu[j].chinese + stu[j].math + stu[j].english;
            if (abs(a - b) <= 10 && abs(stu[i].chinese - stu[j].chinese) <= 5 && abs(stu[i].math - stu[j].math) <= 5 
                && abs(stu[i].english - stu[j].english) <= 5)
            {
                printf("%s %s\n", stu[i].name, stu[j].name);
            }
        }
    }
    return 0;
}

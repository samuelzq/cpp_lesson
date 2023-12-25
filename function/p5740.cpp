/**
 * https://www.luogu.com.cn/problem/p5740
 *
 * @File:   p5740.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2023-12-24
 *
 */
#include <iostream>
#include <cstring>

struct stu {
    char name[11];
    int chinese;
    int math;
    int english;
};

int main(void)
{
    int n, total;
    struct stu student, best;

    scanf("%d", &n);

    scanf("%s %d %d %d", student.name, &student.chinese, &student.math, &student.english);
    total = student.chinese + student.math + student.english;
    best = student;
    for (int j = 0; j < n - 1; j++) {
        scanf("%s %d %d %d", student.name, &student.chinese, &student.math, &student.english);
        if (total < student.chinese + student.math + student.english)
        {
            total = student.chinese + student.math + student.english;
            best = student;
        }
    }

    printf("%s %d %d %d\n", best.name, best.chinese, best.math, best.english);
    return 0;
}

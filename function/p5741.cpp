/**
 * https://www.luogu.com.cn/problem/P5741
 *
 * @File:   p5741.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2023-12-24
 *
 */
#include <bits/stdc++.h>
using namespace std;

struct student {
    string name;
    int chinese;
    int math;
    int english;

    student() : name(""), chinese(0), math(0), english(0) {}

    student(const string &name, int chinese, int math, int english) {
        this->name = name;
        this->chinese = chinese;
        this->math = math;
        this->english = english;
    }

    int total() {
        return this->chinese + this->math + this->english;
    }

    bool match(struct student &s)
    {
        return (abs(this->total() - s.total()) <= 10 && abs(this->chinese - s.chinese) <= 5 && abs(this->math - s.math) <= 5
                && abs(this->english - s.english) <= 5);
    }
} stu[1009];

int main(void)
{
    int n;

    memset(stu, 0, sizeof(struct student));
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        string name;
        int c, m, e;
        cin >> name >> c >> m >> e;
        struct student tu(name, c, m, e);
        stu[i] = tu;
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (stu[i].match(stu[j]))
            {
                cout << stu[i].name << ' ' << stu[j].name << endl;
            }
        }
    }
    return 0;
}

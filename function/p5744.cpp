/**
 * https://www.luogu.com.cn/problem/p5744
 *
 * @File:   p5744.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2023-12-25
 *
 */
#include <iostream>

using namespace std;

struct student {
    string name;
    int age;
    int grade;

    student(string _name, int _age, int _grade)
    {
        this->name = _name;
        this->age = _age;
        this->grade = _grade;
    };

    void update(void)
    {
        this->age++;
        this->grade *= 120;
        this->grade /= 100;
        if (grade > 600)
            grade = 600;
        cout << name << ' ' << age << ' ' << grade << endl;
    };
};

int main(void)
{
    int n;
    cin >> n;

    while (n--)
    {
        string name;
        int grade;
        int age;

        cin >> name >> age >> grade;

        struct student stu(name, age, grade);
        stu.update();
    }
    return 0;
}

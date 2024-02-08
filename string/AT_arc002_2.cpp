/**
 * https://www.luogu.com.cn/problem/AT_arc002_2
 *
 * @File:   AT_arc002_2.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-02-06
 *
 */
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

struct Date {
    int year;
    int month;
    int day;
};

// 函数用于检查是否为闰年
bool isLeapYear(int year)
{
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

// 函数用于获取指定月份的天数
int getDaysInMonth(int year, int month)
{
    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (month == 2 && isLeapYear(year)) {
        return 29;
    }
    return daysInMonth[month - 1];
}

// 函数用于递增日期
void incrementDate(Date& date)
{
    date.day++;
    if (date.day > getDaysInMonth(date.year, date.month)) {
        date.day = 1;
        date.month++;
        if (date.month > 12) {
            date.month = 1;
            date.year++;
        }
    }
}

int main()
{
    string str;
    Date startDate = {1000, 1, 1};

    cin >> str;
    startDate.year = stoi(str.substr(0, 4));
    startDate.month = stoi(str.substr(5, 2));
    startDate.day = stoi(str.substr(8, 2));

    while (startDate.year % (startDate.month * startDate.day))
        incrementDate(startDate);

    cout << startDate.year << '/' << setw(2) << setfill('0') << startDate.month << '/' << setw(2) << setfill('0') << startDate.day << endl;

    return 0;
}

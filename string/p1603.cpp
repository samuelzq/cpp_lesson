/**
 * https://www.luogu.com.cn/problem/P1603
 *
 * @File:   p1603.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2023-12-22
 *
 */
#include <iostream>

using namespace std;

string num[21] = {
"zero", "one", "two", "three", "four",
"five", "six", "seven", "eight", "nine",
"ten", "eleven", "twelve", "thirteen", "fourteen",
"fifteen", "sixteen", "seventeen", "eighteen", "nineteen", "twenty"
};

int cnt[21] = {0, };

int main(void)
{
    int i;
    string str;

    while (cin >> str)
    {
        for (int i = 1; i < 21; i++)
        {
            if (str.compare(num[i]) == 0)
                cnt[i]++;
        }

        if (str.compare("another") == 0)
            cnt[1]++;

        if (str.compare("a") == 0)
            cnt[1]++;
    }


    for (i = 1; i <= 20; i++)
    {
        if (cnt[i])
            break;
    }

    if (i < 21)
    {
    printf("%d", i * i % 100);
    for (int j = 0; j < cnt[i] - 1; j++)
        printf("%02d", i * i % 100);

    for (i++; i <= 20; i++)
    {
        for (int j = 0; j < cnt[i]; j++)
            printf("%02d", i * i % 100);
    }
    }
    else
    {
        printf("0");
    }
    printf("\n");
    return 0;
}

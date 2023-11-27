/**
 * https://www.luogu.com.cn/problem/P1152
 *
 * @File:   p1152.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2023-11-19
 *
 */
#include <iostream>

using namespace std;

int a[1004];
int c[1004] = {0};

int main()
{
    int s, n = 0;


    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (int i = 1; i < n; i++)
    {
        int d;
        if (a[i] > a[i - 1])
            d = a[i] - a[i - 1];
        else
            d = a[i - 1] - a[i];

        if (d > 1000)
        {
            printf("Not jolly\n");
            return 0;
        }
        c[d] = 1;
    }

    s = 0;
    for (int i = 1; i < n; i++)
    {
        if (c[i])
            s += i;
    }
    if (s == n * (n - 1) / 2)
        printf("Jolly\n");
    else
        printf("Not jolly\n");

    return 0;
}

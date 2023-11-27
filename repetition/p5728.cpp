/**
 * https://www.luogu.com.cn/problem/P5728
 *
 * @File:   p5728.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2023-11-27
 *
 */
#include <iostream>

using namespace std;

int a[1003][4];

int main(void)
{
    int n, p;

    scanf("%d", &n);
    p = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d %d", &a[i][0], &a[i][1], &a[i][2]);
        a[i][3] = a[i][0] + a[i][1] + a[i][2];

        for (int j = 0; j < i; j++)
        {
            if (abs(a[j][0] - a[i][0]) <= 5 &&
                abs(a[j][1] - a[i][1]) <= 5 &&
                abs(a[j][2] - a[i][2]) <= 5 &&
                abs(a[j][3] - a[i][3]) <= 10)
                p++;
        }
    }
    printf("%d\n", p);
    return 0;
}

/**
 * https://www.luogu.com.cn/problem/P1428
 *
 * @File:   p1428.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2023-11-27
 *
 */
#include <iostream>

using namespace std;

int a[102];

int main(void)
{
    int n;

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int m;

        scanf("%d", &a[i]);
        m = 0;
        for (int j = 0; j < i; j++)
        {
            if (a[j] < a[i])
                m++;
        }
        printf("%d", m);
        if (i < n - 1)
            printf(" ");
        else
            printf("\n");
    }
    return 0;
}

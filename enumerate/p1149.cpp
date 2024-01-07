/**
 * https://www.luogu.com.cn/problem/P1149
 *
 * @File:   p1149.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-01-06
 *
 */
#include <iostream>

int a[1200] = {0};
int b[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
int main(void)
{
    int n, cnt;

    scanf("%d", &n);
    for (int i = 0; i < 1200; i++)
    {
        int t = i;
        do
        {
            a[i] += b[t % 10];
            t /= 10;
        } while (t);
    }

    cnt = 0;
    for (int i = 0; i < 1200; i++)
    {
        if (a[i] >= 24)
            continue;

        for (int j = 0; j + i < 1200; j++)
        {
            if (a[i] + a[j] + a[i + j] + 4 == n)
            {
//                printf("%d+%d=%d\n", i, j, i+j);
                cnt++;
            }
        }
    }
    printf("%d\n", cnt);
    return 0;
}

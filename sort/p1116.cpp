/**
 * https://www.luogu.com.cn/problem/P1116
 *
 * @File:   p1116.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2023-12-30
 *
 */
#include <iostream>

int a[10004];

int main(void)
{
    int n, cnt, tmp;

    scanf("%d", &n);
    for (int i =  0; i < n; i++)
        scanf("%d", &a[i]);

    cnt = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                tmp = a[j + 1];
                a[j + 1] = a[j];
                a[j] = tmp;
                cnt++;
            }
        }
    }
    printf("%d\n", cnt);
    return 0;
}

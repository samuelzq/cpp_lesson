/**
 * https://www.luogu.com.cn/problem/P2141
 *
 * @File:   p2141.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2023-12-10
 *
 */
#include <iostream>

int a[103];
int s[103][103];

int main(void)
{
    int n, cnt;

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        for (int j = 0; j < i; j++)
            s[j][i] = s[i][j] = a[j] + a[i];
    }

    cnt = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            for (int k = 0; k < j; k++)
            {
            if (s[k][j] == a[i] || s[j][k] == a[i])
            {
                cnt++;
                goto again;
            }
            }
        }
again:
        continue;
    }
    printf("%d\n", cnt);
    return 0;
}

/**
 * https://www.luogu.com.cn/problem/P1304
 *
 * @File:   p1304.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2023-12-25
 *
 */
#include <iostream>

int prime[10005] = {0, };

void init(int n)
{
    prime[0] = prime[1] = 1;

    for (int i = 2; i * i <= n; i++)
    {
        if (prime[i] == 0)
        {
            for (int j = i * i; j <= n; j += i)
                prime[j] = 1;
        }
    }
}

int main(void)
{
    int n;

    scanf("%d", &n);
    init(n);
    for (int i = 4; i <= n; i += 2)
    {
        if (!prime[i - 2]) {
            printf("%d=2+%d\n", i, i - 2);
            continue;
        }
        for (int j = 3; j < i; j += 2)
        {
            if (!prime[j] && !prime[i - j])
            {
                printf("%d=%d+%d\n", i, j, i - j);
                break;
            }
        }
    }
    return 0;
}

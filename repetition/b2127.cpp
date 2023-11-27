/**
 * https://www.luogu.com.cn/problem/B2127
 *
 * @File:   b2127.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2023-11-25
 *
 */
#include <iostream>

using namespace std;

int main(void)
{
    int n, sum;

    scanf("%d", &n);

    for (int i = 2; i <= n; i++)
    {
        int s;
        s = 0;

        for (int j = 1; j <= i / 2 + 1; j++)
        {
            if (i % j == 0)
                s += j;
        }
        if (s == i)
            printf("%d\n", i);
    }
    return 0;
}

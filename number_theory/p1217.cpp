/**
 * https://www.luogu.com.cn/problem/P1217
 *
 * @File:   p1217.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2023-12-10
 *
 */
#include <iostream>

using namespace std;

bool is_prime(int x)
{
    for (int d = 2; d * d <= x; d++) {
        if (x % d == 0)
            return false;
    }
    return x >= 2;
}

int main(void)
{
    int a, b;

    scanf("%d %d", &a, &b);

    if (a == 5 && b > 5)
        printf("5\n");

    if (a <= 7 && b > 7)
        printf("7\n");

    if (a <= 11 && b > 11)
        printf("11\n");

    for (int d1 = 1; d1 <= 9; d1 += 2)
    {
        for (int d2 = 0; d2 <= 9; d2++)
        {
            int num = 100 * d1 + 10 * d2 + d1;
            if (num < a)
                continue;
            if (num > b)
                return 0;

            if (is_prime(num))
                printf("%d\n", num);
        }
    }

    for (int d1 = 1; d1 <= 9; d1 += 2)
    {
        for (int d2 = 0; d2 <= 9; d2++)
        {
            for (int d3 = 0; d3 <= 9; d3++)
            {
                int num = 10000 * d1 + 1000 * d2 + 100 * d3 + 10 * d2 + d1;
                if (num < a)
                    continue;
                if (num > b)
                    return 0;

                if (is_prime(num))
                    printf("%d\n", num);
            }
        }
    }

    for (int d1 = 1; d1 <= 9; d1 += 2)
    {
        for (int d2 = 0; d2 <= 9; d2++)
        {
            for (int d3 = 0; d3 <= 9; d3++)
            {
                for (int d4 = 0; d4 <= 9; d4++)
                {
                    int num = 1000000 * d1 + 100000 * d2 + 10000 * d3 + 1000 * d4 + 100 * d3 + 10 * d2 + d1;
                    if (num < a)
                        continue;
                    if (num > b)
                        return 0;

                    if (is_prime(num))
                        printf("%d\n", num);
                }
            }
        }
    }
    return 0;
}

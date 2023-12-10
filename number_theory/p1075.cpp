/**
 * https://www.luogu.com.cn/problem/P1075
 *
 * @File:   p1075.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2023-12-10
 *
 */
#include <iostream>

using namespace std;

bool is_prime(int x)
{
    for (int d = 2; d * d <= x; d++)
    {
        if (x % d == 0)
            return false;
    }
    return x >= 2;
}

int main(void)
{
    int n;

    scanf("%d", &n);

    for (int i = 1; i * 2 <= n; i++)
    {
        if (n % i == 0)
        {
            if (is_prime(n / i))
            {
                printf("%d\n", n / i);
                return 0;
            }
        }
    }
}

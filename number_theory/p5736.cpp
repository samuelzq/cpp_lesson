/**
 * https://www.luogu.com.cn/problem/P5736 
 *
 * @File:   p5736.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2023-12-24
 *
 */
#include <iostream>

int a[105];

bool is_prime(int n)
{
    if (n == 1)
        return false;
    if (n == 2)
        return true;
    if (n % 2 == 0)
        return false;

    for (int i = 3; i * i <= n; i += 2)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main(void)
{
    int n, i;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (i = 0; i < n; i++)
    {
        if (is_prime(a[i]))
        {
            printf("%d", a[i]);
            break;
        }
    }

    for (i++; i < n; i++)
        if (is_prime(a[i]))
            printf(" %d", a[i]);
    return 0;
}

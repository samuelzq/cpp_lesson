/**
 * https://www.luogu.com.cn/problem/B2145
 *
 * @File:   b2145.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2023-11-25
 *
 */
#include <iostream>

using namespace std;

int a[10];

int main(void)
{
    int n, k, i;

    scanf("%d %d", &n, &k);

    i = 0;
    while (n)
    {
        a[i] = n % 10;
        n /= 10;
        i++;
    }

    printf("%d\n", a[k - 1]);
    return 0;
}

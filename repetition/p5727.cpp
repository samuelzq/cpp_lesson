/**
 * https://www.luogu.com.cn/problem/P5727
 *
 * @File:   p5727.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2023-11-27
 *
 */
#include <iostream>

using namespace std;

int a[102];

int main(void)
{
    int n, i;

    scanf("%d", &n);

    i = 0;

    a[i++] = n;
    while (n > 1)
    {
        if (n % 2)
            n = n * 3 + 1;
        else
            n /= 2;
        a[i++] = n;
    }

    while (i > 1)
    {
        printf("%d ", a[i - 1]);
        i--;
    }
    printf("%d\n", a[0]);
    return 0;
}

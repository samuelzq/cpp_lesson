/**
 * https://www.luogu.com.cn/problem/P1307
 *
 * @File:   p1307.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2023-11-25
 *
 */
#include <iostream>

using namespace std;

int a[22];

int main(void)
{
    bool p = true;
    int n, i, j;

    scanf("%d", &n);
    if (n < 0)
    {
        n = n * -1;
        p = false;
    }
    i = 0;

    do
    {
        a[i] = n % 10;
        n /= 10;
        i++;
    } while (n);

    if (p == false)
        printf("-");

    for (j = 0; j < i - 1; j++)
    {
        if (a[j] != 0)
            break;
    }

    for (; j < i; j++)
        printf("%d", a[j]);

    printf("\n");
    return 0;
}

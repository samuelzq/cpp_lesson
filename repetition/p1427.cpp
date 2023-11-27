/**
 * https://www.luogu.com.cn/problem/P1427
 *
 * @File:   p1427.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2023-11-25
 *
 */
#include <iostream>

using namespace std;

unsigned int a[105];

int main(void)
{
    int n;

    n = 0;
    while(1)
    {
        scanf("%u", &a[n]);
        if (a[n] == 0)
            break;
        n++;
    }

    for (int i = n - 1; i > 0; i--)
        printf("%d ", a[i]);
    printf("%u\n", a[0]);
    return 0;
}

/**
 * https://www.luogu.com.cn/problem/B3687
 *
 * @File:   b2687.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2023-11-25
 *
 */
#include <iostream>

using namespace std;

int main(void)
{
    int i, n, sum;

    scanf("%d", &n);

    sum = 1;
    i = 1;
    while (sum <= n)
    {
        printf("%d\n", i);
        i++;
        sum += i;
    }
    return 0;
}

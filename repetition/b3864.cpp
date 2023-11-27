/**
 * https://www.luogu.com.cn/problem/B3864
 *
 * @File:   b3864.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2023-11-25
 *
 */
#include <iostream>

using namespace std;

int main(void)
{
    int k, l, r, sum;

    scanf("%d %d %d", &k, &l, &r);

    sum = 0;
    for (int i = l; i <= r; i++)
    {
        if (i % k == 0 || i % 10 == k)
            sum += i;
    }
    printf("%d\n", sum);
    return 0;
}

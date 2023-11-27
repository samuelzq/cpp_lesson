/**
 * https://www.luogu.com.cn/problem/B3886
 *
 * @File:   b3886.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2023-11-25
 *
 */
#include <iostream>

using namespace std;

int main(void)
{
    int a, b, c, d, m, sum;

    scanf("%d %d %d %d %d", &a, &b, &c, &d, &m);

    sum = c * 5;

    if (sum > m)
    {
        sum += (2 * d - b) * 20;
    }
    else
    {
        sum -= (b - d) * 20;
    }

    if (sum < 0)
        sum = 0;

    printf("%d\n", sum);
    return 0;
}

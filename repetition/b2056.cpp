/**
 * https://www.luogu.com.cn/problem/B2056
 *
 * @File:   b2056.cpp
 * @Author: Lao Zhang samuelzhang77@yahoo.com
 * @Date:   2023-11-16
 *
 */
#include <iostream>

using namespace std;

int main(void)
{
    int n, sum;

    scanf("%d", &n);
    sum = 0;
    for (int i = 0; i < n; i++)
    {
        int t;

        scanf("%d", &t);
        sum += t;
    }

    printf("%d %.05lf\n", sum, ((double)sum * 1.0) / n);
    return 0;
}

/**
 * https://www.luogu.com.cn/problem/P5726
 *
 * @File:   p5726.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2023-12-10
 *
 */
#include <iostream>

using namespace std;

int main(void)
{
    int n, maxi, mini, sum;

    scanf("%d", &n);

    scanf("%d", &mini);
    sum = maxi = mini;

    for (int i = 1; i < n; i++)
    {
        int t;
        scanf("%d", &t);
        sum += t;
        if (t > maxi)
            maxi = t;
        if (t < mini)
            mini = t;
    }

    sum -= (mini + maxi);
    printf("%.02f\n", sum * 1.0 / (n - 2));
    return 0;
}

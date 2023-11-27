/**
 * https://www.luogu.com.cn/problem/B2095
 *
 * @File:   b2095.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2023-11-25
 *
 */
#include <iostream>

using namespace std;

double s[303];

int main(void)
{
    int n, maxi, mini;
    double maxs, mins, sums, avs, delt;

    scanf("%d", &n);
    scanf("%lf", &s[0]);

    sums = maxs = mins = s[0];
    maxi = mini = 0;
    for (int i = 1; i < n; i++)
    {
        scanf("%lf", &s[i]);
        sums += s[i];
        if (maxs < s[i])
        {
            maxi = i;
            maxs = s[i];
        }

        if (mins > s[i])
        {
            mini = i;
            mins = s[i];
        }
    }
    avs = (sums - maxs - mins) / (n - 2);

    s[maxi] = s[mini] = 0;
    mins = maxs;
    maxs = 0;
    for (int i = 1; i < n; i++)
    {
        if (s[i] < 0.0000000005)
            continue;

        if (maxs <= s[i])
            maxs = s[i];

        if (mins > s[i])
            mins = s[i];
    }

    if ((maxs - avs) > (avs - mins))
        delt = maxs - avs;
    else
        delt = avs - mins;
    printf("%.02lf %.02lf\n", avs, delt);
    return 0;
}

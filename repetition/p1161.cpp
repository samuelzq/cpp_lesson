/**
 * https://www.luogu.com.cn/problem/P1161
 *
 * @File:   p1161.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2023-12-11
 *
 */
#include <iostream>

using namespace std;

char l[2000006] = {0};

int main(void)
{
    int n, t, idx;
    double a;

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%lf %d", &a, &t);
        for (int j = 1; j <= t; j++)
        {
            idx = (int)(j * a);
            l[idx] = !l[idx];
        }
    }

    idx = 0;

    while (!l[idx])
        idx++;
    printf("%d\n", idx);

    return 0;
}

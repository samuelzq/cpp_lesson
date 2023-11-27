/**
 * https://www.luogu.com.cn/problem/B3796
 *
 * @File:   b379.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2023-11-18
 *
 */
#include <iostream>

using namespace std;

int main(void)
{
    int n, m, out;

    scanf("%d %d", &n, &m);

    out = 0;
    for (int i = 0; i < n; i++)
    {
        int a;
        scanf("%d", &a);

        if (m >= a)
        {
            out += a;
            m -= a;
        }
    }
    printf("%d\n", out - (int)(out * 0.88));
    return 0;
}

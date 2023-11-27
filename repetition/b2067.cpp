/**
 * https://www.luogu.com.cn/problem/B2067
 *
 * @File:   b2067.cpp
 * @Author: Lao Zhang samuelzhang77@yahoo.com
 * @Date:   2023-11-16
 *
 */
#include <iostream>

using namespace std;

int main(void)
{
    int m, n, out;

    scanf("%d %d", &m, &n);

    out = 0;
    while (n--)
    {
        int t;

        scanf("%d", &t);
        if (t <= m)
            m -= t;
        else
            out++;
    }
    printf("%d\n", out);
    return 0;
}

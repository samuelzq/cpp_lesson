/**
 * https://www.luogu.com.cn/problem/B2081
 *
 * @File:   b2081.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2023-11-18
 *
 */
#include <iostream>

using namespace std;

int main(void)
{
    long long n, out;

    scanf("%lld", &n);

    out = 0;
    for (int i = 1; i <= n; i++)
    {
        bool c;
        int t;
        t = i;
        if (t % 7 == 0)
            continue;

        c = false;
        while (t)
        {
            if (t % 10 == 7)
            {
                c = true;
                break;
            }
            t /= 10;
        }
        if (c)
            continue;

        out += i * i;
    }
    printf("%lld\n", out);
    return 0;
}

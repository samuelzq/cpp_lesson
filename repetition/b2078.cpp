/**
 *
 * @File:   b2078.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2023-11-17
 *
 */
#include <iostream>

using namespace std;

int main(void)
{
    long long m, k, t;

    scanf("%lld %lld", &m, &k);

    t = 0;
    while (m)
    {
        if (m % 10 == 3)
            t++;
        m /= 10;
    }

    if (t == k)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}

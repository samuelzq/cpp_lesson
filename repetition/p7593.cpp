/**
 * https://www.luogu.com.cn/problem/P7593
 *
 * @File:   p7593.cpp
 * @Author: Lao Zhang samuelzhang77@yahoo.com
 * @Date:   2023-11-12
 *
 */
#include <iostream>

using namespace std;

int main(void)
{
    int t;

    scanf("%d", &t);
    while (t--)
    {
        long long n, k, s, mins, maxs;

        scanf("%lld %lld %lld", &n, &k, &s);

        mins = maxs = 0;

        mins = (1 + k) * k / 2;
        maxs = (n + n - k + 1) * k / 2;
#if 0
        for (int i = 0; i < k; i++)
        {
            mins += 1 + i;
            maxs += n - i;
        }
#endif
        if (s >= mins && s <= maxs)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}

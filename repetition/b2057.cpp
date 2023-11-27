/**
 * https://www.luogu.com.cn/problem/B2057
 *
 * @File:   b2057.cpp
 * @Author: Lao Zhang samuelzhang77@yahoo.com
 * @Date:   2023-11-12
 *
 */
#include <iostream>

using namespace std;

int main(void)
{
    int n, a, maxc;

    scanf("%d", &n);

    maxc = 0;
    while (n--)
    {
        scanf("%d", &a);
        if (a > maxc)
            maxc = a;
    }
    printf("%d\n", maxc);
    return 0;
}

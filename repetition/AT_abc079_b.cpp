/**
 * https://www.luogu.com.cn/problem/AT_abc079_b
 *
 * @File:   AT_abc079_b.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2023-12-02
 *
 */
#include <iostream>

using namespace std;

int main(void)
{
    int n;
    long long f1, f2, f;

    scanf("%d", &n);
    f = 2;
    f1 = 2;
    f2 = 1;

    if (n == 1)
        f = 1;
    else if (n == 0)
        f = 2;
    else
    {
        for (int i = 2; i <= n; i++)
        {
            f = f1 + f2;
            f1 = f2;
            f2 = f;
        }
    }
    printf("%lld\n", f);
    return 0;
}

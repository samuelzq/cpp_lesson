/**
 * https://www.luogu.com.cn/problem/B3743
 *
 * @File:   b3743.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2023-11-18
 *
 */
#include <iostream>

using namespace std;

int sh[10] = {1, 0, 1, 0, 0, 0, 1, 0, 2, 1};

int main(void)
{
    long long x, out;

    scanf("%lld", &x);

    out = 0;
    do
    {
        int a;

        a = x % 10;
        out += sh[a];
        x /= 10;
    } while(x);
    printf("%lld\n", out);
    return 0;
}

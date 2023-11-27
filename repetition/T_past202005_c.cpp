/**
 * https://www.luogu.com.cn/problem/AT_past202005_c
 *
 * @File:   T_past202005_c.cpp
 * @Author: Lao Zhang samuelzhang77@yahoo.com
 * @Date:   2023-11-12
 *
 */
#include <iostream>

using namespace std;

int main(void)
{
    long long int a, r, n, out;

    scanf("%lld %lld %lld", &a, &r, &n);

    out = a;
    for (int i = 1; i < n; i++) {
        out *= r;
        if (out > 1000000000)
            break;
    }
    if (out <= 1000000000)
        printf("%lld\n", out);
    else
        printf("large\n");
    return 0;
}

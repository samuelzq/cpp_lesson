/**
 * https://www.luogu.com.cn/problem/B3919
 *
 * @File:   B3919.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-04-14
 *
 */
#include <bits/stdc++.h>

using namespace std;

#define BIT(k)    (1 << (k))

int clearBits(int num, int n)
{
   // 创建一个掩码，其中n位为0，其余位为1
    unsigned int mask = ~((1 << n) - 1);

    // 使用与操作将num的尾部n位清零
    return num & mask;
}

int main(void)
{
    int n, q;
    long long out;

    scanf("%d %d", &n, &q);
    out = 0;
    while (q--) {
        int k;
        scanf("%d", &k);

        if (!(n & BIT(k - 1))) {
            int t;
            t = clearBits(n | BIT(k - 1), k - 1);
            out += t - n;
            n = t;
        }
    }
    printf("%lld\n", out);
    return 0;
}

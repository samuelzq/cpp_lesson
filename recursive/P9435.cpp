/**
 * https://www.luogu.com.cn/problem/P9435
 *
 * @File:   P9435.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-06-22
 *
 */
#include <iostream>
# define LL long long

int resolve(LL w)
{
    if (w <= 3)
        return 3;

    if (w <= 6)
        return 4;

    LL cnt = 6;
    int n = 4;

    while (cnt < w) {
        cnt *= 2;
        n++;
    }
    return n;
}


int main(void)
{
    int t;

    scanf("%d", &t);

    while (t--) {
        LL w;
        scanf("%lld", &w);
        printf("%d\n", resolve(w));
    }
    return 0;
}

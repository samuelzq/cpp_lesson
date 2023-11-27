/**
 * https://www.luogu.com.cn/problem/B2061
 *
 * @File:   b2061.cpp
 * @Author: Lao Zhang samuelzhang77@yahoo.com
 * @Date:   2023-11-12
 *
 */
#include <iostream>

using namespace std;

int main(void)
{
    int o, f, t, k, a;

    o = f = t = 0;

    scanf("%d", &k);
    for (int i = 0; i < k; i++) {
        scanf("%d", &a);
        if (a == 1)
            o++;
        if (a == 5)
            f++;
        if (a == 10)
            t++;
    }
    printf("%d\n%d\n%d\n", o, f, t);
    return 0;
}

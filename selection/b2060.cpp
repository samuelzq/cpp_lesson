/**
 * https://www.luogu.com.cn/problem/B2060
 *
 * @File:   b2060.cpp
 * @Author: Lao Zhang samuelzhang77@yahoo.com
 * @Date:   2023-11-11
 *
 */
#include <iostream>

using namespace std;

int main(void)
{
    int m, n, out;

    scanf("%d %d", &m, &n);

    out = 0;
    for (int i = m; i <= n; i++) {
        if (i % 17 == 0)
            out += i;
    }
    printf("%d\n", out);
    return 0;
}

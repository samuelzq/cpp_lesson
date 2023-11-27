/**
 * https://www.luogu.com.cn/problem/B2058
 *
 * @File:   b2058.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2023-11-18
 *
 */
#include <iostream>

using namespace std;

int main(void)
{
    int n, g, s, b;

    scanf("%d", &n);

    g = s = b = 0;
    while (n--)
    {
        int x, y, z;

        scanf("%d %d %d", &x, &y, &z);
        g += x;
        s += y;
        b += z;
    }
    printf("%d %d %d %d\n", g, s, b, g + s + b);
    return 0;
}

/**
 * https://www.luogu.com.cn/problem/P1085
 *
 * @File:   p1085.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2023-11-19
 *
 */
#include <iostream>

using namespace std;

int main(void)
{
    int d, h;

    h = 0;
    d = 0;
    for (int i = 0; i < 7; i++)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        if (h < a + b)
        {
            h = a + b;
            d = i + 1;
        }
    }
    if (h > 8)
        printf("%d\n", d);
    else
        printf("0\n");
    return 0;
}

/**
 * https://www.luogu.com.cn/problem/P5717
 *
 * @File:   p5717.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2023-12-08
 *
 */
#include <iostream>

using namespace std;

int main(void)
{
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    if (a + b <= c || a + c <= b || b + c <= a)
    {
        printf("Not triangle\n");
    }
    else
    {
        a = a * a;
        b = b * b;
        c = c * c;
        if (a + b == c || a + c == b || b + c == a)
            printf("Right triangle\n");

        if ((a <= c && b <= c && a + b > c) ||
            (a <= b && c <= b && a + c > b) ||
            (c <= a && b <= a && b + c > a))
            printf("Acute triangle\n");

        if ((a < c && b < c && a + b < c) ||
            (a < b && c < b && a + c < b) ||
            (c < a && b < a && b + c < a))
            printf("Obtuse triangle\n");

        if (a == b || b == c || a == c)
            printf("Isosceles triangle\n");

        if (a == b && b == c)
            printf("Equilateral triangle\n");
    }
    return 0;
}

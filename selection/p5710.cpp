/**
 * https://www.luogu.com.cn/problem/P5710
 *
 * @File:   p5710.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2023-11-25
 *
 */
#include <iostream>

using namespace std;

int main(void)
{
    int x;
    bool a, b;

    scanf("%d", &x);

    a = (x % 2 == 0);
    b = (x > 4) && (x <= 12);

    if (a && b)
        printf("1");
    else
        printf("0");
    printf(" ");

    if (a || b)
        printf("1");
    else
        printf("0");
    printf(" ");

    if ((a && !b) || (!a && b))
        printf("1");
    else
        printf("0");
    printf(" ");

    if (!a && !b)
        printf("1");
    else
        printf("0");
    printf("\n");
    return 0;
}

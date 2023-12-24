/**
 * https://www.luogu.com.cn/problem/B2040
 *
 * @File:   b2040.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2023-12-16
 *
 */
#include <iostream>

int main(void)
{
    int n;

    scanf("%d", &n);
    if (n > 9 && n < 100)
        printf("1\n");
    else
        printf("0\n");
    return 0;
}

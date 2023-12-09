/**
 * https://www.luogu.com.cn/problem/P5712
 *
 * @File:   p5712.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2023-12-08
 *
 */
#include <iostream>

using namespace std;

int main(void)
{
    int n;

    scanf("%d", &n);

    if (n > 1)
        printf("Today, I ate %d apples.\n", n);
    else
        printf("Today, I ate %d apple.\n", n);
    return 0;
}

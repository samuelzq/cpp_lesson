/**
 * https://www.luogu.com.cn/problem/B3804
 *
 * @File:   b3804.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2023-11-25
 *
 */
#include <iostream>

using namespace std;

int main(void)
{
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    if ((a + b + c <= 100) && b % 5 == 0 && c % 7 == 0 && (a - b) > (b - c))
        printf("Yes\n");
    else
        printf("No\n");
    return 0;
}

/**
 * https://www.luogu.com.cn/problem/P3954
 *
 * @File:   p3954.cpp
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
    printf("%d\n", (a * 20 + b * 30 + c * 50) / 100);
    return 0;
}

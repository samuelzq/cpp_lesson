/**
 * https://www.luogu.com.cn/problem/P5713
 *
 * @File:   p5713.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2023-12-08
 *
 */
#include <iostream>

using namespace std;

int main(void)
{
    int n, l, s;

    scanf("%d", &n);

    l = n * 5;
    s = n * 3 + 11;

    if (l > s)
        printf("Luogu\n");
    else
        printf("Local\n");
    return 0;
}

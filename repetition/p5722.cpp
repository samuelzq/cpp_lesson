/**
 * https://www.luogu.com.cn/problem/P5722
 *
 * @File:   p5722.cpp
 * @Author: Lao Zhang samuelzhang77@yahoo.com
 * @Date:   2023-11-12
 *
 */
#include <iostream>

using namespace std;

int main(void)
{
    int n, out;

    scanf("%d", &n);

    out = 0;
    for (int i = 1; i <= n; i++)
        out += i;

    printf("%d\n", out);
    return 0;
}

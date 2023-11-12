/**
 * https://www.luogu.com.cn/problem/B2142
 *
 * @File:   b2142.cpp
 * @Author: Lao Zhang samuelzhang77@yahoo.com
 * @Date:   2023-11-11
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

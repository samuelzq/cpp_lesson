/**
 * https://www.luogu.com.cn/problem/B2062
 *
 * @File:   b2062.cpp
 * @Author: Lao Zhang samuelzhang77@yahoo.com
 * @Date:   2023-11-06
 *
 */
#include <iostream>

using namespace std;

int main(void)
{
    int a, n;
    int out = 1;

    scanf("%d %d", &a, &n);
    for (int i = 1; i <= n; i++)
        out *= a;

    printf("%d\n", out);
    return 0;
}

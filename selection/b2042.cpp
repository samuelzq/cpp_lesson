/**
 * https://www.luogu.com.cn/problem/B2042
 *
 * @File:   b2042.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2023-11-25
 *
 */
#include <iostream>

using namespace std;

int main(void)
{
    int n;

    scanf("%d", &n);

    if (n % 15)
        printf("NO\n");
    else
        printf("YES\n");

    return 0;
}

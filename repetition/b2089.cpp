/**
 * https://www.luogu.com.cn/problem/B2089
 *
 * @File:   2089.cpp
 * @Author: Lao Zhang samuelzhang77@yahoo.com
 * @Date:   2023-11-12
 *
 */
#include <iostream>

using namespace std;

int a[103];

int main(void)
{
    int n;

    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
        scanf("%d", &a[i]);

    for (int i = n; i > 1; i--)
        printf("%d ", a[i]);
    printf("%d\n", a[1]);
    return 0;
}

/**
 * https://www.luogu.com.cn/problem/B2125
 *
 * @File:   b2125.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2023-11-25
 *
 */
#include <iostream>

using namespace std;

int a[109];
char name[109][30];

int main(void)
{
    int n, m, idx;

    scanf("%d", &n);

    m = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d %s", &a[i], name[i]);
        if (a[i] > m)
        {
            m = a[i];
            idx = i;
        }
    }

    printf("%s\n", name[idx]);
    return 0;
}

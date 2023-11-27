/**
 * https://www.luogu.com.cn/problem/B2064
 *
 * @File:   b2064.cpp
 * @Author: Lao Zhang samuelzhang77@yahoo.com
 * @Date:   2023-11-12
 *
 */
#include <iostream>

using namespace std;

int f[40];

int main(void)
{
    int n;

    f[1] = f[2] = 1;

    for (int i = 3; i < 40; i++)
        f[i] = f[i - 1] + f[i - 2];

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        int j;
        scanf("%d", &j);
        printf("%d\n", f[j]);
    }
    return 0;
}

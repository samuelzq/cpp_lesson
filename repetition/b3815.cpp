/**
 * https://www.luogu.com.cn/problem/B3815
 *
 * @File:   b3815.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2023-11-18
 *
 */
#include <iostream>

using namespace std;

int s[6] = {3, 3, 7, 7, 11, 11};

int main(void)
{
    int n, out, p;

    scanf("%d", &n);

    out = n * 21;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &p);
        out -= s[p - 1];
    }
    out += p;
    printf("%d\n", out);
    return 0;
}

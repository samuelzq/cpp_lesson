/**
 * https://www.luogu.com.cn/problem/P4956
 *
 * @File:   p4956.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2023-12-02
 *
 */
#include <iostream>

using namespace std;

int main(void)
{
    int x, k, n;

    scanf("%d", &n);

    n /= 52;
    k = 1;
    x = (n - 21) / 7;
    while (x > 100)
    {
        k++;
        x = (n - 21 * k) / 7;
    }

    printf("%d\n%d\n", x, k);
    return 0;
}

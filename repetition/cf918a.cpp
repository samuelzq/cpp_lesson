/**
 * https://www.luogu.com.cn/problem/CF918A
 *
 * @File:   cf918a.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2023-12-02
 *
 */
#include <iostream>

using namespace std;

int a[1010] = {0, };

int main(void)
{
    int n, f1, f2, f;

    scanf("%d", &n);

    a[1] = a[2] = 1;
    f1 = f2 = 1;

    for (int i = 3; i <= 1000; i++)
    {
        f = f2 + f1;
        if (f >= 1010)
            break;
        a[f] = 1;
        f1 = f2;
        f2 = f;
    }

    for (int i = 1; i <= n; i++)
    {
        if (a[i])
            printf("O");
        else
            printf("o");
    }
    printf("\n");
    return 0;
}

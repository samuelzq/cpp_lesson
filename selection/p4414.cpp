/**
 * https://www.luogu.com.cn/problem/P4414
 *
 * @File:   p4414.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2023-12-08
 *
 */
#include <iostream>

using namespace std;

int main(void)
{
    int a, b, c;
    int aa[3];
    char A, B, C;

    scanf("%d %d %d\n%c%c%c", &a, &b, &c, &A, &B, &C);

    if (a > b)
    {
        if (b > c)
        {
            swap(a, b);
            swap(b, c);
            swap(a, b);
        }
        else
        {
            swap(a, b);
            if (b > c)
                swap(b, c);
        }
    }
    else
    {
        if (b > c)
        {
            swap(b, c);
            if (b < a)
                swap(a, b);
        }
    }

//    printf("%d %d %d\n", a, b, c);
    aa[0] = a;
    aa[1] = b;
    aa[2] = c;

    printf("%d %d %d\n", aa[A - 'A'], aa[B - 'A'], aa[C - 'A']);
    return 0;
}

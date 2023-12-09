/**
 * https://www.luogu.com.cn/problem/P1255
 *
 * @File:   P1255.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2023-12-02
 *
 */
#include <iostream>

using namespace std;

const int N = 1000000000;
const int L = 125;
int fib[5010][L];

void add(int a[], int b[], int c[])
{
    int s, t, i;

    t = 0;
    for (i = 0; i < L - 1; i++) {
        s = a[i] + b[i] + t;
        t = s / N;
        s = s % N;
        c[i] = s;
    }
    if (t)
        c[i] = t;
    if (t) {
        printf("Overflow\n");
        exit(0);
    }

}

void out(int a[])
{
    int i;
    i = L - 1;
    while (i && !a[i])
        i--;
    printf("%d", a[i--]);
    for (; i >= 0; i--)
        printf("%09d", a[i]);
    printf("\n");
}

int main(void)
{
    int n;

    fib[0][0] = 1;
    fib[1][0] = 1;
    fib[2][0] = 2;

    scanf("%d", &n);

    for (int i = 2; i <= n; i++)
        add(fib[i - 1], fib[i - 2], fib[i]);

    out(fib[n]);
    return 0;
}

/**
 * https://www.luogu.com.cn/problem/P1760
 *
 * @File:   P1760.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-06-22
 *
 */
#include <bits/stdc++.h>
using namespace std;

#define M    10000
#define N    100000000
int a[M] = {0}, b[M] = {0}, *f1, *f2, *f;
int l = 0;

void multi(int a[], int b, int c[])
{
    int t, cc = 0;

    for (int i = 0; i < M; i++) {
        t = a[i] * b + cc;
        cc = 0;
        if (t >= N) {
            cc = t / N;
            t %= N;
        }
        c[i] = t;
    }
}

void add(int a[], int b, int s[])
{
    int i, c = 0;

    for (i = 0; i < M; i++) {
        int t = a[i] + c + b;

        if (t >= N)
            c = 1;
        else
            c = 0;
        s[i] = t % N;
        if (!c)
            break;
    }
    return;
}

void print(int a[])
{
    int i = M - 1;

    while (i >= 0 && !a[i])
        i--;

    printf("%d", a[i]);
    while (--i >= 0)
        printf("%08d", a[i]);

    printf("\n");
}

int main(void)
{
    unsigned int n;

    scanf("%d", &n);

    f1 = a;
    f2 = b;
    for (int i = 1; i <= n; i++) {
        multi(f1, 2, f2);
        add(f2, 1, f2);
        f = f1;
        f1 = f2;
        f2 = f;
    }
    print(f1);
    return 0;
}

/**
 * https://www.luogu.com.cn/problem/P1009
 *
 * @File:   p1009.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2023-12-08
 *
 */
#include <iostream>
#include <cstring>

using namespace std;

const int M = 10000;
const int LEN = 1000;

int s[LEN] = {0, };
int f[LEN] = {0, };

void add(int a[], int b[])
{
    for (int i = 0; i < LEN - 1; ++i)
    {
        b[i] += a[i];
        if (b[i] >= M)
        {
            // 进位
            b[i + 1] += 1;
            b[i] -= M;
        }
    }
}

void mul(int a[], int b)
{
    int p, c;

    c = 0;
    for (int i = 0; i < LEN - 1; ++i) {
        p = a[i] * b + c;

        if (p >= M) {
            c = p / M;
            a[i] = p % M;
        }
        else
        {
            a[i] = p;
            c = 0;
        }
    }
}

void print(int a[])
{
    int i;
    for (i = LEN - 1; i >= 1; --i)
        if (a[i] != 0) break;

    printf("%d", a[i--]);
    for (; i >= 0; --i)
        printf("%04d", a[i]);
    putchar('\n');
}

int main(void)
{
    int n;

    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        memset(f, 0, sizeof(f));
        f[0] = 1;
        for (int j = 1; j <= i; j++)
        {
            mul(f, j);
        }
        add(f, s);
//      print(f);
  //    print(s);
    }
    print(s);
    return 0;
}

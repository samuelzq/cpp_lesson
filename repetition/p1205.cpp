/**
 * https://www.luogu.com.cn/problem/P1205
 *
 * @File:   p1205.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2023-12-13
 *
 */
#include <iostream>

using namespace std;

char a[12][12], b[12][12], c[12][12], d[12][12], e[12][12], f[12][12];

bool same(char s[12][12], char t[12][12], int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (s[i][j] != t[i][j])
                return false;
        }
    }
    return true;
}

int main(void)
{
    int n;
    char cc;

    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> cc;
            a[i][j] = cc;
            b[j][n - i + 1] = cc;
            c[n - i + 1][n - j + 1] = cc;
            d[n - j + 1][i] = cc;
        }
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> cc;
            e[i][j] = cc;
            f[i][n - j + 1] = cc;
        }
    }

    if (same(b, e, n))
    {
        printf("1\n");
    }
    else if (same(c, e, n))
    {
        printf("2\n");
    }
    else if (same(d, e, n))
    {
        printf("3\n");
    }
    else if (same(a, f, n))
    {
        printf("4\n");
    }
    else if (same(b, f, n) || same(c, f, n) || same(d, f, n))
    {
        printf("5\n");
    }
    else if (same(a, e, n))
    {
        printf("6\n");
    }
    else
    {
        printf("7\n");
    }
    return 0;
}

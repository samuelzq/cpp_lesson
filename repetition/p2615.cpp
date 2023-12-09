/**
 * https://www.luogu.com.cn/problem/P2615
 *
 * @File:   p2615.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2023-11-29
 *
 */
#include <iostream>

using namespace std;

int a[102][102] = {{0}, };

int main(void)
{
    int n, c, i, j;

    scanf("%d", &n);

    i = 1;
    j = n / 2 + 1;
    c = 1;
    while (c <= n * n)
    {
        a[i][j] = c;
        c++;
        if (i == 1 && j == n)
        {
            i = 2;
        }
        else if (i == 1 && j < n)
        {
            i = n;
            j++;
        }
        else if (i > 1 && j == n)
        {
            i--;
            j = 1;
        }
        else
        {
            if (!a[i - 1][j + 1])
            {
                i--;
                j++;
            }
            else
            {
                i++;
            }
        }
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j < n; j++)
            printf("%d ", a[i][j]);
        printf("%d\n", a[i][n]);
    }
    return 0;
}

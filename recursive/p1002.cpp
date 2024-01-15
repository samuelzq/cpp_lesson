/**
 * https://www.luogu.com.cn/problem/P1002
 *
 * @File:   p1002.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-01-07
 *
 */
#include <iostream>

long long m[24][24] = {0};

int main(void)
{
    int x, y, a, b;

    scanf("%d %d %d %d", &x, &y, &a, &b);
    m[2][2] = 1;

    m[a + 2][b + 2] = -1;
    m[a][b + 1] = -1;
    m[a][b + 3] = -1;
    m[a + 1][b] = -1;
    m[a + 1][b + 4] = -1;
    m[a + 3][b] = -1;
    m[a + 3][b + 4] = -1;
    m[a + 4][b + 1] = -1;
    m[a + 4][b + 3] = -1;

    for (int i = 2; i <= x + 2; i++)
    {
        for (int j = 2; j <= y + 2; j++)
        {
            if (m[i][j] == -1)
                continue;

            if (m[i - 1][j] != -1)
                m[i][j] += m[i - 1][j];
            if (m[i][j - 1] != -1)
                m[i][j] += m[i][j - 1];
        }
    }

    printf("%lld\n", m[x + 2][y + 2]);
    return 0;
}

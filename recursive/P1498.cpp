/**
 * https://www.luogu.com.cn/problem/P1498
 *
 * @File:   P1498.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-02-18
 *
 */
#include <bits/stdc++.h>

using namespace std;

char c[3240][3240] = {"/_\\", "/\\"};

int main(void)
{
    int n;
    int h = 2, w = 4;

    memset(c, ' ', sizeof(c));
    memcpy(&c[0][0], "/__\\", 4);
    memcpy(&c[1][0], " /\\ ", 4);
    scanf("%d", &n);

    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < h; j++)
            memcpy(&c[j][0] + w, &c[j][0], w);
        for (int j = 0; j < h; j++)
            memcpy(&c[j + h][0] + w / 2, &c[j][0], w);
        w *= 2;
        h *= 2;
    }

    w = w / 2 + 1;
    for (int i = h - 1; i >= 0; i--)
    {
        c[i][w++] = 0;
        printf("%s\n", c[i]);
    }
    return 0;
}

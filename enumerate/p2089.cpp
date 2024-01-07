/**
 * https://www.luogu.com.cn/problem/P2089
 *
 * @File:   p2089.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2023-12-31
 *
 */
#include <bits/stdc++.h>

using namespace std;

int p[60000][10];

int main(void)
{
    int n, ans = 0;

    scanf("%d", &n);

    for (int a = max(1, n - 27); a <= min(3, n - 9); a++)    // 后面9种配方得到的美味程度最多27，最少9
    {
        for (int b = max(1, n - 24 - a); b <= min(3, n - 8 - a); b++) // 减去前一阵调味料带来的美味程度
            for (int c = max(1, n - 21 - a - b); c <= min(3, n - 7 - a - b); c++)  // 减去前一阵调味料带来的美味程度
                for (int d = max(1, n - 18 - a - b - c); d <= min(3, n - 6 - a - b - c); d++)  // 减去前一阵调味料带来的美味程度
                    for (int e = max(1, n - 15 - a - b - c - d); e <= min(3, n - 5 - a - b - c - d); e++)  // 减去前一阵调味料带来的美味程度
                        for (int f = max(1, n - 12 - a - b - c - d - e); f <= min(3, n - 4 - a - b - c - d - e); f++)
                            for (int g = max(1, n - 9 - a - b - c - d - e - f); g <= min(3, n - 3 - a - b - c - d - e - f); g++)
                                for (int h = max(1, n - 6 - a - b - c - d - e - f - g); h <= min(3, n - 2 - a - b - c - d - e - f - g); h++)
                                    for (int i = max(1, n - 3 - a - b - c - d - e - f - g - h); i <= min(3, n - 1 - a - b - c - d - e - f - g - h); i++)
                                        for (int j = max(1, n - a - b - c - d - e - f - g - h - i); j <= min(3, n - a - b - c - d - e - f - g - h - i); j++)
    {
                                            p[ans][0] = a;
                                            p[ans][1] = b;
                                            p[ans][2] = c;
                                            p[ans][3] = d;
                                            p[ans][4] = e;
                                            p[ans][5] = f;
                                            p[ans][6] = g;
                                            p[ans][7] = h;
                                            p[ans][8] = i;
                                            p[ans][9] = j;
                                            ans++;

    }

    }

    printf("%d\n", ans);
    if (ans)
    {
        for (int i = 0; i < ans; i++)
        {
            for (int j = 0; j < 9; j++)
                printf("%d ", p[i][j]);
            printf("%d\n", p[i][9]);
        }
    }
    return 0;
}

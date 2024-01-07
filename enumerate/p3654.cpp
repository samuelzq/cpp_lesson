/**
 * https://www.luogu.com.cn/problem/P3654
 *
 * @File:   p3654.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-01-06
 *
 */
#include <bits/stdc++.h>

using namespace std;

char s[110][110];

int main(void)
{
    int r, c, k, cnt;

    cnt = 0;
    scanf("%d %d %d", &r, &c, &k);
    for (int i = 0; i < r; i++)
        scanf("%s", s[i]);

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            int l;
            for (l = 0; l < k && l + j < c; l++)
                if (s[i][j + l] != '.')
                    break;
            if (l == k)
            {
               // printf("R:%d %d\n", i, j);
                cnt++;
            }
            if (k == 1)
                continue;
            for (l = 0; l < k && i + l < r; l++)
                if (s[i + l][j] != '.')
                    break;
            if (l == k)
            {
               // printf("D:%d %d\n", i, j);
                cnt++;
            }
        }
    }
    printf("%d\n", cnt);
    return 0;
}

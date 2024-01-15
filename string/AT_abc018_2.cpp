/**
 * https://www.luogu.com.cn/problem/AT_abc018_2
 *
 * @File:   AT_abc018_2.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-01-14
 *
 */
#include <cstdio>

char str[128];

int main(void)
{
    int n;

    scanf("%s %d", str, &n);

    for (int i = 0; i < n; i++)
    {
        int p, q;
        scanf("%d %d", &p, &q);

        p--;
        q--;
        for (int j = 0; j <= (q - p) / 2; j++)
        {
            char t;
            t = str[p + j];
            str[p + j] = str[q - j];
            str[q - j] = t;
        }
//    printf("%s\n", str);
    }
    printf("%s\n", str);
    return 0;
}

/**
 * https://www.luogu.com.cn/problem/CF523A
 *
 * @File:   CF523A.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-01-29
 *
 */
#include <cstdio>
#include <cstring>

char a[110][110] = {{0},};
char b[110][110] = {{0},};

int main(void)
{
    int w, h;

    scanf("%d %d", &w, &h);

    for (int i = 0; i < h; i++)
        scanf("%s", a[i]);
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
            b[j][h - 1 - i] = a[i][j];
    }
#if 0
    for (int i = 0; i < w; i++)
    {
        printf("%s\n", b[i]);
    }
    printf("-------\n");
#endif
    for (int i = 0; i < w; i++)
    {
        for (int j = h - 1; j >= 0; j--)
        {
            putchar(b[i][j]);
            putchar(b[i][j]);
        }
        putchar('\n');
        for (int j = h - 1; j >= 0; j--)
        {
            putchar(b[i][j]);
            putchar(b[i][j]);
        }
        putchar('\n');
    }
    return 0;
}

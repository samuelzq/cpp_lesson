/**
 * https://www.luogu.com.cn/problem/P1598
 *
 * @File:   p1598.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2023-12-23
 *
 */
#include <iostream>
#include <cstring>

int cnt[28] = {0};
char o[410][59];

int main(void)
{
    int maxc;
    char c;

    memset(o, ' ', sizeof(o));
    maxc = 0;
    c = getchar();
    while (c != EOF)
    {
        if ('A' <= c && c <= 'Z')
        {
            int t;
            t = ++cnt[c - 'A' + 1];
            if (maxc < t)
                maxc = t;
        }
        c = getchar();
    }

    for (int i = 26; i > 0; i--)
    {
        int j = maxc - 1;

        for (; j >= maxc - cnt[i];j--)
            o[j][2 * (i - 1)] = '*';
    }

    for (int i = 0; i < maxc; i++)
    {
        for (int j = 51; j >= 0; j--)
        {
            if (o[i][j] == '*')
                break;
            o[i][j] = 0;
        }
    }

    for (int i = 0; i < maxc; i++)
        printf("%s\n", o[i]);
    printf("A B C D E F G H I J K L M N O P Q R S T U V W X Y Z\n");
    return 0;
}

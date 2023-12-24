/**
 * https://www.luogu.com.cn/problem/P1597
 *
 * @File:   p1597.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2023-12-23
 *
 */
#include <iostream>

int main(void)
{
    int a[3] = {0, 0, 0}, i;
    char c;

    while (1)
    {
        do
        {
            c = getchar();
            if (c == EOF || c == '\n' || c == '\r')
                goto exit;
        } while (c != 'a' && c != 'b' && c != 'c');

        i = c - 'a';

        do
        {
            c = getchar();
        } while (c == '=' || c == ' ' || c == ':');

        if (c == 'a' || c == 'b' || c == 'c')
            a[i] = a[c - 'a'];
        else
            a[i] = c - '0';

        while (c != ';')
            c = getchar();
      //  printf("%d\n", a[i]);
    }
exit:
    printf("%d %d %d\n", a[0], a[1], a[2]);
    return 0;
}

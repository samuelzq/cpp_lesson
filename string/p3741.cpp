/**
 * https://www.luogu.com.cn/problem/P3741
 *
 * @File:   p3741.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2023-12-18
 *
 */
#include <iostream>

int main(void)
{
    char str[4];
    int n, i, cnt, m;

    scanf("%d", &n);

    m = cnt = i = 0;
    str[i] = getchar();
    while (str[i] == '\n' || str[i] == '\r')
        str[i] = getchar();
    n--;

    i++;
    while (n--)
    {
        str[i++] = getchar();

        if (i == 2)
        {
            if (str[0] == 'V' && str[1] == 'K')
            {
                cnt++;
                i = 0;
            }
            else if (str[0] == 'K' && str[1] == 'K')
            {
                if (m == 0)
                {
                    m = 1;
                    cnt++;
                }
                i = 0;
            }
            else if (str[0] == 'V' && str[1] == 'V')
            {
                if (n == 0 && !m)
                    cnt++;
            }
            else
            {
                str[0] = 'V';
                i = 1;
            }
        }
        else if (i == 3)
        {
            if (str[0] != 'V' || str[1] != 'V')
                    printf("Error!\n");
            if (str[2] == 'K')
            {
                i = 0;
                cnt++;
            }
            else
            {
                if (m == 0)
                {
                    m = 1;
                    cnt++;
                }
                i = 1;
            }
        }
    }
    printf("%d\n", cnt);
    return 0;
}

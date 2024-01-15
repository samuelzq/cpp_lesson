/**
 * https://www.luogu.com.cn/problem/CF1634A
 *
 * @File:   CF1634A.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-01-14
 *
 */
#include <cstdio>
#include <cstring>

char str[128];

int main(void)
{
    int t;

    scanf("%d", &t);

    while (t--)
    {
        int n, k, l, c;

        scanf("%d %d", &n, &k);
        scanf("%s", str);
        if (k == 0)
            c = 1;
        else
        {
            int i;
            l = strlen(str);

            for (i = 0; i < l / 2; i++)
            {
                if (str[i] != str[l - 1 - i])
                    break;
            }
            if (i == l / 2)
                c = 1;
            else
                c = 2;
        }
        printf("%d\n", c);
    }
    return 0;
}

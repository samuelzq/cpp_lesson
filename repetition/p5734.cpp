/**
 * https://www.luogu.com.cn/problem/p5734
 *
 * @File:   p5734.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2023-12-16
 *
 */
#include <iostream>
#include <cstring>

using namespace std;

int main(void)
{
    int n;
    char str1[110], str2[103];
    scanf("%d %s", &n, str1);

    while (n--)
    {
        int a;
        scanf("%d", &a);

        if (a == 1)
        {
            int l, s;
            scanf("%s", str2);
            l = strlen(str2);
            s = strlen(str1);
            for (int i = 0; i < l; i++)
                str1[i + s] = str2[i];
            str1[s + l] = 0;
        }
        else if (a == 2)
        {
            int a1, a2;

            scanf("%d %d", &a1, &a2);
            for (int i = a1, j = 0; i <= a1 + a2; i++, j++)
                str1[j] = str1[i];
            str1[a2] = 0;
        }
        else if (a == 3)
        {
            int b, l, s;
            scanf("%d %s", &b, str2);
            l = strlen(str2);
            s = strlen(str1);
            for (int j = s - 1; j >= b; j--)
                str1[j + l] = str1[j];
            for (int i = 0; i < l; i++)
            {
                str1[b + i] = str2[i];
            }
            str1[l + s] = 0;
        }
        else if (a == 4)
        {
            int l, s;
            scanf("%s", str2);

            l = strlen(str1);
            s = strlen(str2);
            for (int i = 0; i < strlen(str1); i++)
            {
                int j;
                for (j = 0; j < s && j + i < l; j++)
                {
                    if (str1[i + j] != str2[j])
                        break;
                }
                if (j == s)
                {
                    printf("%d\n", i);
                    goto next;
                }
            }
            printf("-1\n");
            goto next;
        }
        printf("%s\n", str1);
next:
    }
    return 0;
}

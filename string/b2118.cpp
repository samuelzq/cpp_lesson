/**
 * https://www.luogu.com.cn/problem/B2118
 *
 * @File:   b2118.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-01-14
 *
 */
#include <cstdio>
#include <cstring>

int main(void)
{
    bool sub = false;
    int l1, l2;
    char str1[128], str2[128];

    scanf("%s %s", str1, str2);

    l1 = strlen(str1);
    l2 = strlen(str2);

    if (l1 <= l2)
    {
        for (int i = 0; i <= l2 - l1; i++)
        {
            int j;
            for (j = 0; j < l1; j++)
            {
                if (str1[j] != str2[i + j])
                    break;
            }
            if (j == l1)
            {
                sub = true;
                printf("%s is substring of %s\n", str1, str2);
                break;
            }
        }
    }
    else
    {
        for (int i = 0; i <= l1 - l2; i++)
        {
            int j;
            for (j = 0; j < l2; j++)
            {
                if (str2[j] != str1[i + j])
                    break;
            }
            if (j == l2)
            {
                sub = true;
                printf("%s is substring of %s\n", str2, str1);
                break;
            }
        }
    }

    if (sub != true)
        printf("No substring\n");
    return 0;
}

/**
 *
 * @File:   p1308_1.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-01-13
 *
 */
#include <cstdio>
#include <cstring>
#include <cmath>

char str1[15], str2[100006];

int main(void)
{
    int cnt, f, l1, idx;

    cnt = idx = 0;
    f = -1;

    scanf("%s", str1);
    l1 = strlen(str1);
    while (scanf("%s", str2) != EOF)
    {
        int l2, i;

        idx++;
        l2 = strlen(str2);
        if (l2 != l1)
            continue;

        for (i = 0; i < l1; i++)
        {
            if  (str1[i] != str2[i])
            {
                if (abs(str1[i] - str2[i]) != 'a' - 'A')
                    break;
            }
        }

        if (i == l1)
        {
            cnt++;
            f = (f == -1) ? idx - 1 : f;
        }
    }
    if (cnt)
        printf("%d %d\n", cnt, f);
    else
        printf("%d\n", -1);
    return 0;
}

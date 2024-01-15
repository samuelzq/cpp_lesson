/**
 * https://www.luogu.com.cn/problem/B2110
 *
 * @File:   b2110.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-01-14
 *
 */
#include <cstdio>
#include <cstring>

int a[26] = {0};
int main(void)
{
    char str[1105];

    scanf("%s", str);

    for (int i = 0; i < strlen(str); i++)
        a[str[i] - 'a']++;

    for (int i = 0; i < strlen(str); i++)
    {
        if (a[str[i] - 'a'] == 1)
        {
            printf("%c\n", str[i]);
            return 0;
        }
    }
    printf("no\n");
    return 0;
}

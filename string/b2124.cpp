/**
 * https://www.luogu.com.cn/problem/B2124
 *
 * @File:   b2124.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-01-13
 *
 */
#include <cstdio>
#include <cstring>

int main(void)
{
    int l;
    char str[512];

    scanf("%s", str);

    l = strlen(str);
    for (int i = 0; i < l / 2; i++)
    {
        if (str[i] != str[l - 1 - i])
        {
            printf("no\n");
            return 0;
        }
    }
    printf("yes\n");
    return 0;
}

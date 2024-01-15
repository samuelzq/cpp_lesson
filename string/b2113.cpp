/**
 * https://www.luogu.com.cn/problem/B2113
 *
 * @File:   b2113.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-01-13
 *
 */
#include <cstdio>
#include <cstring>

int main(void)
{
    char str[512];
    int l;

    scanf("%s", str);
    l = strlen(str);
    for (int i = 0; i < l - 1; i++)
        printf("%c", str[i] + str[i + 1]);
    printf("%c\n", str[l - 1] + str[0]);
    return 0;
}

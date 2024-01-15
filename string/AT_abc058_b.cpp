/**
 * https://www.luogu.com.cn/problem/AT_abc058_b
 *
 * @File:   AT_abc058_b.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-01-14
 *
 */
#include <cstdio>
#include <cstring>

char str1[100], str2[100];

int main(void)
{
    int l;
    scanf("%s %s", str1, str2);

    l = strlen(str2);

    for (int i = 0; i < l; i++)
        printf("%c%c", str1[i], str2[i]);

    if (strlen(str1) > l)
        printf("%c", str1[l]);

    printf("\n");

    return 0;
}

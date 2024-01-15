/**
 * https://www.luogu.com.cn/problem/AT_abc015_1
 *
 * @File:   AT_abc015_1.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-01-14
 *
 */
#include <cstdio>
#include <cstring>

char str1[514], str2[514];

int main(void)
{
    scanf("%s %s", str1, str2);

    if (strlen(str1) >= strlen(str2))
        printf("%s\n", str1);
    else
        printf("%s\n", str2);

    return 0;
}
